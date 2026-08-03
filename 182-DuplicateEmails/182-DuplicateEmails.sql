-- Last updated: 03/08/2026, 10:12:50
# Write your MySQL query statement below
select email from Person group by email having count(*)>1; 