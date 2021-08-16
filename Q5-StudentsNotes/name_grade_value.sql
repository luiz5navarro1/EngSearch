SELECT IF (g.grade < 8, 'NULL', s.name) AS name, g.grade, s.value
FROM students AS s, notes AS g
WHERE s.value >= g.min_value AND s.value <= g.max_value
ORDER BY g.grade DESC, s.name DESC, s.value ASC;