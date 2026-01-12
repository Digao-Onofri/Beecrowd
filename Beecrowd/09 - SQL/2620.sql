/*
    Name: Orders in First Half
    Link: https://judge.beecrowd.com/en/problems/view/2620
*/

SELECT customers.name, orders.id
FROM customers
JOIN orders ON customers.id = orders.id_customers
WHERE orders.orders_date BETWEEN '2016-01-01' AND '2016-06-30'
