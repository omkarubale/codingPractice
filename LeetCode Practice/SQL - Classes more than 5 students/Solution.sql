# Write your MySQL query statement below
SELECT classes.class FROM (SELECT class, COUNT(DISTINCT student) AS counter
FROM courses
GROUP BY class) AS classes
WHERE classes.counter > 4

