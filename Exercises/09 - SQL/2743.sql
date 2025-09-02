/*
    Name: Richard's Multiverse
    Link: https://judge.beecrowd.com/en/problems/view/2738
*/

SELECT name, LENGTH(name) AS length
FROM people
ORDER BY length DESC
