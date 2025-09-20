CREATE TABLE customers (
    cust_id INT PRIMARY KEY,
    cust_first_name VARCHAR(50),
    cust_last_name VARCHAR(50),
    cust_gender CHAR(1),
    cust_year_of_birth INT
);
INSERT INTO customers (cust_id, cust_first_name, cust_last_name, cust_gender, cust_year_of_birth)
VALUES (1, 'Lakshya', 'Kant', 'M', 2005);

INSERT INTO customers (cust_id, cust_first_name, cust_last_name, cust_gender, cust_year_of_birth)
VALUES (2, 'Parthh', 'Singh', 'M', 1984);

INSERT INTO customers (cust_id, cust_first_name, cust_last_name, cust_gender, cust_year_of_birth)
VALUES (3, 'Alice', 'Johnson', 'F', 1990);

INSERT INTO customers (cust_id, cust_first_name, cust_last_name, cust_gender, cust_year_of_birth)
VALUES (4, 'Bob', 'Smith', 'M', 1985);

SELECT cust_id FROM customers;

SELECT cust_id, cust_first_name, cust_last_name FROM customers;

SELECT cust_first_name, cust_last_name FROM customers WHERE cust_gender = 'F';

SELECT cust_first_name, cust_last_name FROM customers WHERE cust_year_of_birth > 2000;

SELECT cust_id FROM customers WHERE cust_first_name = 'Lakshya' AND cust_last_name = 'Kant';

SELECT * FROM customers;

