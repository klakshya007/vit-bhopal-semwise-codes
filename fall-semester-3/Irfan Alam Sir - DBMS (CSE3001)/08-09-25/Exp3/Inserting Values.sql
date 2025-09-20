
INSERT INTO Furniture (Name, Type, Category, Material, Price) VALUES
('Office Chair', 'Chair', 'Office', 'Wood', 2500.00),
('Dining Table', 'Table', 'Kitchen', 'Marble', 12000.00),
('Wardrobe', 'Wardrobe', 'Bedroom', 'Wood', 15000.00);

INSERT INTO Customers (Name, City, Region, State) VALUES
('Amit Sharma', 'Delhi', 'North', 'Delhi'),
('Priya Verma', 'Mumbai', 'West', 'Maharashtra'),
('John Mathew', 'Bangalore', 'South', 'Karnataka');

INSERT INTO TimeDim (SaleDate, Year, Month, Day) VALUES
('2025-09-01', 2025, 9, 1),
('2025-09-05', 2025, 9, 5);

INSERT INTO Sales (FurnitureID, CustomerID, TimeID, Quantity, Discount, Income) VALUES
(1, 1, 1, 2, 200.00, 4800.00),
(2, 2, 2, 1, 500.00, 11500.00);
