# Write your MySQL query statement below
SELECT 
    * 
FROM 
    cinema
WHERE 
    description != 'boring'
    AND mod(id,2) = 1
ORDER BY rating DESC
