-- Last updated: 03/08/2026, 10:12:45
# Write your MySQL query statement below
select c.name as Customers from Customers c Left join Orders o ON c.id = o.customerId Where o.customerId is null;
