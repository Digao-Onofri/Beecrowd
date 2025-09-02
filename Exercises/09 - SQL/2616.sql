/*
    Name: No Rental
    Link: https://judge.beecrowd.com/en/problems/view/2616
*/

SELECT customers.id, customers.name 
FROM customers
LEFT JOIN locations ON customers.id = locations.id_customers
WHERE locations.locations_date IS NULL
ORDER BY customers.id
