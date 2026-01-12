/*
    Name: Cheap Movies
    Link: https://judge.beecrowd.com/en/problems/view/2613
*/

SELECT movies.id, movies.name
FROM movies
JOIN prices ON movies.id_prices = prices.id
WHERE prices.value < 2.00
