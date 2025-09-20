-- 0. Preparations -- clean start
 DROP DATABASE IF EXISTS bank_demo;
 CREATE DATABASE bank_demo;
 USE bank_demo;
 
 -- 1. Schema
 CREATE TABLE accounts (
 id INT PRIMARY KEY AUTO_INCREMENT,
 holder VARCHAR(100),
 balance DECIMAL(10,2) NOT NULL
) ;

 CREATE TABLE transfers (
 id INT PRIMARY KEY AUTO_INCREMENT,
 from_acct INT,
 to_acct INT,
 amount DECIMAL(10,2),
 created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
 ) ;
 -- 2. Sample data
 INSERT INTO accounts (holder, balance) VALUES
 ('Alice', 1000.00),
 ('Bob', 500.00),
 ('Charlie', 200.00);
 
 -- 3. Simple atomic transfer (illustrates Atomicity & Consistency)-- Run as a single session:
 START TRANSACTION;-- debit Alice
 UPDATE accounts SET balance = balance-250.00 WHERE holder = 'Alice';-- credit Bob
 UPDATE accounts SET balance = balance + 250.00 WHERE holder = 'Bob';
 INSERT INTO transfers (from_acct, to_acct, amount) VALUES
 ((SELECT id FROM accounts WHERE holder='Alice'), (SELECT id FROM accounts WHERE holder='Bob'), 250.00);
 COMMIT;
 
 
 -- 4. Using SAVEPOINT and ROLLBACK (partial undo)
 START TRANSACTION;
 UPDATE accounts SET balance = balance-50.00 WHERE holder = 'Alice';
 SAVEPOINT sp_after_debit;-- Suppose next step fails (simulated)
 UPDATE accounts SET balance = balance + 50.00 WHERE holder = 'NonExistent';
 -- will update 0 rows-- Detect problem and rollback to savepoint
 ROLLBACK TO SAVEPOINT sp_after_debit;-- undo steps after savepoint (but keeps earlier changes)
 -- If you want to abort entire transaction:
 ROLLBACK;-- nothing is applied
 -- 5. Concurrency demo: Lost update problem
 -- Use two separate Workbench tabs (Session A and Session B). Do NOT commit immediately.-- Session A:
 START TRANSACTION;
 SELECT balance FROM accounts WHERE holder='Charlie';-- suppose returns 200.00
 UPDATE accounts SET balance = balance + 50.00 WHERE holder='Charlie';-- intends +50
-- leave uncommitted
-- Session B (concurrent):
 START TRANSACTION;
 SELECT balance FROM accounts WHERE holder='Charlie';-- also sees 200.00 (depending on isolation level)
 UPDATE accounts SET balance = balance + 30.00 WHERE holder='Charlie';
 COMMIT;
 -- Session B commits
 -- Now Session A COMMIT;
 -- Without locking, final balance may reflect a lost update depending on timing and isolation level.
 
 -- 6. Prevent lost update: SELECT ... FOR UPDATE (pessimistic lock)
 -- Session A:
 START TRANSACTION;
 SELECT balance FROM accounts WHERE holder='Charlie' FOR UPDATE;-- locks the row
 UPDATE accounts SET balance = balance + 50.00 WHERE holder='Charlie';
 COMMIT;
 
 
 -- 7. Isolation levels demonstration (READ UNCOMMITTED -> READ COMMITTED -> REPEATABLE READ -> SERIALIZABLE)
 -- You can set and test:
 SET SESSION TRANSACTION ISOLATION LEVEL READ UNCOMMITTED;-- Run reading queries in another session to observe dirty reads.
 
 -- 8. Simulated crash and recovery notes
 -- InnoDB automatically rolls back uncommitted transactions on crash and replays committed transactions from redo log during recovery.
 -- To simulate: begin a transaction, do updates, kill the server (not available from Workbench safely).
 -- Instead, explain this behavior and show that uncommitted changes are not visible after reconnect.