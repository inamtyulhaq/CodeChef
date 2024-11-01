-- https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP02

-- use count function
-- use WHERE clause
-- do remember, string values in columns are case-sensitive

-- your code goes here
SELECT COUNT(*) FICTION_COUNT
FROM Books
WHERE genre = 'Fiction'