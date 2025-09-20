SELECT f.Type, SUM(s.Income) AS TotalIncome
FROM Sales s
JOIN Furniture f ON s.FurnitureID = f.FurnitureID
GROUP BY f.Type;

SELECT c.State, SUM(s.Quantity) AS TotalQty, SUM(s.Income) AS TotalIncome
FROM Sales s
JOIN Customers c ON s.CustomerID = c.CustomerID
GROUP BY c.State;

SELECT t.Year, t.Month, SUM(s.Income) AS MonthlyIncome
FROM Sales s
JOIN TimeDim t ON s.TimeID = t.TimeID
GROUP BY t.Year, t.Month;
