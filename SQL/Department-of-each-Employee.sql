-- https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP09

-- select the department, also the count of employees
-- now use GROUP BY to group the employees by department

SELECT department, count(employee_name) total_employees FROM Employees
GROUP BY department