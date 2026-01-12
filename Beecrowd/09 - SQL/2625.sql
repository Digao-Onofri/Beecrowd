/*
    Name: CPF Validation
    Link: https://judge.beecrowd.com/en/problems/view/2625
*/

SELECT 
	CONCAT(
    SUBSTRING(cpf, 1, 3), '.',
    SUBSTRING(cpf, 4, 3), '.',
    SUBSTRING(cpf, 7, 3), '-',
    SUBSTRING(cpf, 10, 3)) AS cpf
FROM natural_person
