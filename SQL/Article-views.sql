-- https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP06

-- use simple select statement
-- filter by using WHERE clause
-- sort by using ORDER BY

SELECT author_id, author_name, publication_name
FROM Views
WHERE view_count = 0
ORDER BY author_id