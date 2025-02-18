/*
  Mysql
*/

# Write your MySQL query statement below
SELECT S.product_id, product_name
FROM Sales S
LEFT JOIN Product P
ON S.product_id = P.product_id
GROUP BY s.product_id
HAVING MIN(sale_date) >= '2019-01-01' AND
       MAX(sale_date) <= '2019-03-31'
