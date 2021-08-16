SELECT DISTINCT r.name FROM
(
SELECT c.id, c.name FROM cats AS c
UNION ALL
SELECT d.id, d.name FROM dogs AS d
) AS r ORDER BY r.name;