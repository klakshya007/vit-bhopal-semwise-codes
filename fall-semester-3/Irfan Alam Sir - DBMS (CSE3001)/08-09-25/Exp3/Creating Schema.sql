CREATE DATABASE furniture_company;
USE furniture_company;

CREATE TABLE Furniture (
    FurnitureID INT AUTO_INCREMENT PRIMARY KEY,
    Name VARCHAR(100),
    Type VARCHAR(50),        -- chair, table, wardrobe...
    Category VARCHAR(50),    -- kitchen, bedroom...
    Material VARCHAR(50),    -- wood, marble...
    Price DECIMAL(10,2)
);

CREATE TABLE Customers (
    CustomerID INT AUTO_INCREMENT PRIMARY KEY,
    Name VARCHAR(100),
    City VARCHAR(50),
    Region VARCHAR(50),
    State VARCHAR(50)
);

CREATE TABLE TimeDim (
    TimeID INT AUTO_INCREMENT PRIMARY KEY,
    SaleDate DATE,
    Year INT,
    Month INT,
    Day INT
);

CREATE TABLE Sales (
    SaleID INT AUTO_INCREMENT PRIMARY KEY,
    FurnitureID INT,
    CustomerID INT,
    TimeID INT,
    Quantity INT,
    Discount DECIMAL(10,2),
    Income DECIMAL(12,2)
);
