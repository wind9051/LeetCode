# Write your MySQL query statement below
SELECT 
    employee_id 
FROM 
    (
    SELECT employee_id FROM employees
    UNION ALL 
    SELECT employee_id FROM salaries
) AS t
GROUP BY 
    employee_id
HAVING 
    count(employee_id) = 1
ORDER BY 
    employee_id ASC;
