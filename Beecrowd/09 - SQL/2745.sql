/*
    Name: Taxes
    Link: https://judge.beecrowd.com/en/problems/view/2745
*/

SELECT name, ROUND((salary * (10/100.0)), 2) AS tax
FROM people
WHERE salary > 3000
