# Write your MySQL query statement below
select e1.Name as Employee 
from Employee e1 join Employee e2 on e1.ManagerId =e2.Id #self join and only return those have manager
where e1.Salary > e2.Salary #return have manager and salary is higher than them

