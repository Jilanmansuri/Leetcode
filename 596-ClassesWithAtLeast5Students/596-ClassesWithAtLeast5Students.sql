-- Last updated: 03/08/2026, 10:10:51
# Write your MySQL query statement below
select class from Courses group by class having count(*)>4;