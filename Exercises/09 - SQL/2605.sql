/*
    Name: Executive Representatives 
    Link: https://judge.beecrowd.com/en/problems/view/2605
*/

SELECT products.name AS name, providers.name AS name
FROM products
JOIN categories ON categories.id = products.id_categories
JOIN providers ON providers.id = products.id_providers
where products.id_categories = 6
