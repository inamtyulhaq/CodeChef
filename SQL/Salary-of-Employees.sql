-- https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP08

-- use where clause to filter the data
-- use order by clause to sort the data
-- use desc keyword to sort the data in descending order

SELECT employee_name, company, salary
FROM employees
WHERE category = 'Full-Time'
ORDER BY salary DESC;
