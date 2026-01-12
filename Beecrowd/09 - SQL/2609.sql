/*
    Name: Products by Categories
    Link: https://judge.beecrowd.com/en/problems/view/2609
*/

SELECT categories.name AS name, SUM(products.amount) AS sum
FROM categories
JOIN products ON categories.id = products.id_categories
GROUP BY categories.name
