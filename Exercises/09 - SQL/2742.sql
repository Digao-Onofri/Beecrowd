/*
    Name: Richard's Multiverse
    Link: https://judge.beecrowd.com/en/problems/view/2742
*/

SELECT life_registry.name, ROUND(life_registry.omega * 1.618, 3) AS "Fator N"
FROM life_registry
JOIN dimensions ON life_registry.dimensions_id = dimensions.id
WHERE life_registry.name LIKE 'Richard%' AND (dimensions.name = 'C774' OR dimensions.name = 'C875')
