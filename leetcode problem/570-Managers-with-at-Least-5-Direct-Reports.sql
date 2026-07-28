# Write your MySQL query statement below
select e.name as name from Employee as e INNER JOIN Employee as m ON e.id = m.managerId group by e.id having count(m.id) >= 5 