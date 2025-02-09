-- https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP04?tab=statement

-- it was a tricky problem
-- as you may think, it includes JOIN
-- but it doesn't
-- simply select distinct players
-- user order by desc for sorting by descending order
-- use limit to output only 3 players

SELECT DISTINCT player_name, score
FROM Players
ORDER BY score DESC
LIMIT 3;