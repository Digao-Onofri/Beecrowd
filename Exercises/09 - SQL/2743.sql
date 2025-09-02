/*
    Name: Number of Characters
    Link: https://judge.beecrowd.com/en/problems/view/2743
*/

SELECT name, LENGTH(name) AS length
FROM people
ORDER BY length DESC
