CREATE TABLE flights (
  flno INT PRIMARY KEY,
  from1 VARCHAR(50) NOT NULL,
  to1 VARCHAR(50) NOT NULL,
  distance INT CHECK (distance > 0),
  departs TIMESTAMP NOT NULL,
  arrives TIMESTAMP NOT NULL
);


CREATE TABLE aircraft(
  aid INT PRIMARY KEY,
  aname VARCHAR(50) NOT NULL,
  cruisingrange INT CHECK (cruisingrange > 0)
);

CREATE TABLE employees (
  eid INT PRIMARY KEY,
  ename VARCHAR(50) NOT NULL,
  salary INT CHECK (salary >= 0)
);

CREATE TABLE Certified (
    eid INT,
    aid INT,
    PRIMARY KEY (eid, aid),
    FOREIGN KEY (eid) REFERENCES Employees(eid),
    FOREIGN KEY (aid) REFERENCES Aircraft(aid)
);