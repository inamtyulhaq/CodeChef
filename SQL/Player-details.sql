-- https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP05

-- use JOIN
-- use INNER JOIN
-- use LIMIT till 5

SELECT match_id, player_1, player_2, winner, match_date, score
FROM Players INNER JOIN Matches
ON Players.player_name = Matches.winner
ORDER BY match_date DESC
LIMIT 5