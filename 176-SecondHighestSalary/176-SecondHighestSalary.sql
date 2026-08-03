-- Last updated: 03/08/2026, 10:12:54
# Write your MySQL query statement below
SELECT MAX(salary) AS SecondHighestSalary from Employee where salary<(select max(salary) from Employee); 