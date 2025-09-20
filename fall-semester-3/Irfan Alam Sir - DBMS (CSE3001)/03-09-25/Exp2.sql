CREATE TABLE Sailors (
    sid INT PRIMARY KEY,
    sname VARCHAR2(50),
    rating INT,
    age NUMBER
);

CREATE TABLE Boats (
    bid INT PRIMARY KEY,
    bname VARCHAR2(50),
    color VARCHAR2(20)
);

CREATE TABLE Reserves (
    sid INT,
    bid INT,
    day DATE,
    PRIMARY KEY (sid, bid, day),
    FOREIGN KEY (sid) REFERENCES Sailors(sid),
    FOREIGN KEY (bid) REFERENCES Boats(bid)
);

SELECT * FROM SAILORS;
SELECT * FROM BOATS;
SELECT * FROM RESERVES;

INSERT INTO Sailors VALUES (1, 'Rajesh', 8, 35);
INSERT INTO Sailors VALUES (2, 'Amit', 6, 28);
INSERT INTO Sailors VALUES (3, 'Suresh', 10, 40);
INSERT INTO Sailors VALUES (4, 'Vikram', 7, 22);

INSERT INTO Boats VALUES (101, 'Ganga', 'Red');
INSERT INTO Boats VALUES (102, 'Yamuna', 'Green');
INSERT INTO Boats VALUES (103, 'Krishna', 'Blue');
INSERT INTO Boats VALUES (123, 'Godavari', 'Pink');

INSERT INTO Reserves VALUES (1, 101, TO_DATE('2025-09-01', 'YYYY-MM-DD'));
INSERT INTO Reserves VALUES (2, 123, TO_DATE('2025-09-02', 'YYYY-MM-DD'));
INSERT INTO Reserves VALUES (3, 103, TO_DATE('2025-09-03', 'YYYY-MM-DD'));
INSERT INTO Reserves VALUES (4, 102, TO_DATE('2025-09-04', 'YYYY-MM-DD'));

SELECT sname, age FROM Sailors;

SELECT * FROM Sailors WHERE rating > 7;

SELECT bname, color FROM Boats;

SELECT * FROM Boats WHERE color = 'Red';


SELECT S.sname
FROM Sailors S, Reserves R
WHERE S.sid = R.sid AND R.bid = 123;

SELECT DISTINCT R.sid
FROM Reserves R, Boats B
WHERE R.bid = B.bid AND B.color = 'Pink';

SELECT DISTINCT B.color
FROM Boats B, Reserves R, Sailors S
WHERE S.sid = R.sid AND R.bid = B.bid AND S.sname = 'Rajesh';

SELECT DISTINCT S.sname
FROM Sailors S, Reserves R
WHERE S.sid = R.sid;

SELECT DISTINCT S.sname
FROM Sailors S, Reserves R, Boats B
WHERE S.sid = R.sid AND R.bid = B.bid
  AND (B.color = 'Red' OR B.color = 'Green');

SELECT S.sname
FROM Sailors S, Reserves R
WHERE S.sid = R.sid AND R.bid = 103;

SELECT S.sname
FROM Sailors S
WHERE S.sid NOT IN (
    SELECT R.sid FROM Reserves R WHERE R.bid = 103
);

SELECT S.sname
FROM Sailors S
WHERE S.rating > (SELECT rating FROM Sailors WHERE sname = 'Rajesh');

SELECT S.sname
FROM Sailors S
WHERE S.rating >= ALL (SELECT rating FROM Sailors);

SELECT COUNT(sid) FROM Sailors;

SELECT COUNT(DISTINCT bid) FROM Reserves;

SELECT COUNT(bid) FROM Boats;

SELECT MAX(age) FROM Sailors;

SELECT MIN(age) FROM Sailors;

SELECT AVG(age) FROM Sailors WHERE rating = 10;

SELECT COUNT(DISTINCT sname) FROM Sailors;

SELECT sname, age
FROM Sailors
WHERE age = (SELECT MAX(age) FROM Sailors);

SELECT COUNT(*) FROM Sailors;

SELECT sname
FROM Sailors
WHERE age > (SELECT MAX(age) FROM Sailors WHERE rating = 10);

SELECT * FROM Sailors ORDER BY age;

SELECT sname FROM Sailors ORDER BY sname;

