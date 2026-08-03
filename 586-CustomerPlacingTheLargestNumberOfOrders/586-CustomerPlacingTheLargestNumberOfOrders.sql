-- Last updated: 03/08/2026, 10:10:55
# Write your MySQL query statement below
select customer_number from Orders group by customer_number order by count(*) desc limit 1;