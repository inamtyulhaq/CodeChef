// https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP07

// use IS NULL
// cant use = NULL
// NULL is not a value, it is a state of being unknown. 
// So, we can't use the = operator to compare it with other values. Instead, we use the IS NULL operator to check if a value is NULL or not.

SELECT book_id, title, author, published_year
FROM Library
WHERE rating IS NULL