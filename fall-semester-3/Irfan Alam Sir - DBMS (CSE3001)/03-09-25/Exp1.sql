CREATE TABLE Flights (
    flno INT PRIMARY KEY,
    from_city VARCHAR2(50),
    to_city VARCHAR2(50),
    distance INT,
    departs DATE,
    arrives DATE
);

CREATE TABLE Employees (
    eid INT PRIMARY KEY,
    ename VARCHAR(50),
    salary INT
);

CREATE TABLE Aircraft (
    aid INT PRIMARY KEY,
    aname VARCHAR(50),
    cruisingrange INT
);

CREATE TABLE Certified (
    eid INT,
    aid INT,
    PRIMARY KEY (eid, aid),
    FOREIGN KEY (eid) REFERENCES Employees(eid),
    FOREIGN KEY (aid) REFERENCES Aircraft(aid)
);

SELECT * FROM FLIGHTS;
SELECT * FROM EMPLOYEES;
SELECT * FROM AIRCRAFT;
SELECT * FROM CERTIFIED;

INSERT INTO Flights VALUES
(101, 'Bonn', 'Madras', 4500, TO_DATE('09:30:00', 'HH24:MI:SS'), TO_DATE('16:00:00', 'HH24:MI:SS'));
INSERT INTO Flights VALUES
(102, 'Delhi', 'Mumbai', 1150, TO_DATE('07:45:00', 'HH24:MI:SS'), TO_DATE('10:00:00', 'HH24:MI:SS'));

INSERT INTO Aircraft VALUES (201, 'Boeing 737', 5600);
INSERT INTO Aircraft VALUES (202, 'Airbus A320', 6100);

INSERT INTO Employees VALUES (301, 'Ravi Kumar', 120000);
INSERT INTO Employees VALUES (302, 'Ananya Singh', 90000);

INSERT INTO Certified VALUES (301, 201);
INSERT INTO Certified VALUES (302, 202);

SELECT DISTINCT C.eid
FROM Certified C
JOIN Aircraft A ON C.aid = A.aid
WHERE A.aname LIKE 'Boeing%';

SELECT DISTINCT E.ename
FROM Employees E
JOIN Certified C ON E.eid = C.eid
JOIN Aircraft A ON C.aid = A.aid
WHERE A.aname LIKE 'Boeing%';

SELECT DISTINCT A.aid
FROM Aircraft A, Flights F
WHERE F.from_city = 'Bonn'
  AND F.to_city = 'Madras'
  AND A.cruisingrange >= F.distance;

SELECT DISTINCT F.flno
FROM Flights F
JOIN Aircraft A ON A.cruisingrange >= F.distance
JOIN Certified C ON C.aid = A.aid
JOIN Employees E ON E.eid = C.eid
WHERE E.salary > 100000;

SELECT DISTINCT E.ename
FROM Employees E
JOIN Certified C ON E.eid = C.eid
JOIN Aircraft A ON C.aid = A.aid
WHERE A.cruisingrange > 3000
  AND A.aname NOT LIKE 'Boeing%';
