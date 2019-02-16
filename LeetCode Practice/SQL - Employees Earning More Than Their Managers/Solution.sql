-- Write your MySQL query statement below
SELECT b.Name AS Employee
FROM Employee AS a
JOIN Employee AS b ON b.ManagerId = a.Id AND b.Salary > a.Salary