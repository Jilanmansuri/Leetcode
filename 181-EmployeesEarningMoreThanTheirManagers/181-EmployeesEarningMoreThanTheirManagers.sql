-- Last updated: 03/08/2026, 10:12:53
SELECT
    e.name AS Employee
FROM Employee e
JOIN Employee m
ON e.managerId = m.id
WHERE e.salary > m.salary;