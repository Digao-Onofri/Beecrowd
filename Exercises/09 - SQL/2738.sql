/*
    Name: Contest
    Link: https://judge.beecrowd.com/en/problems/view/2738
*/

SELECT candidate.name, ROUND(((score.math * 2) + (score.specific * 3) + (score.project_plan * 5))/ 10.0, 2) AS average
FROM candidate
JOIN score ON candidate.id = score.candidate_id
ORDER BY average DESC;
