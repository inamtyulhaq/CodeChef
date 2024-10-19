-- https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP12

-- use where clause to filter out products with price greater than 100.00

-- your code goes here
SELECT PRODUCT_NAME, CATEGORY FROM PRODUCTS 
WHERE PRICE > 100.00