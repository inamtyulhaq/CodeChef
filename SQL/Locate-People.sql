-- https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP15

-- use LIKE and % operator

-- your code goes here
SELECT DEPARTMENT_NAME, LOCATION
FROM DEPARTMENTS
WHERE LOCATION LIKE 'S%'