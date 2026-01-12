/*
    Name: Action Movies
    Link: https://judge.beecrowd.com/en/problems/view/2611
*/

SELECT movies.id, movies.name
FROM movies
JOIN genres ON genres.id = movies.id_genres
WHERE genres.description = 'Action'
