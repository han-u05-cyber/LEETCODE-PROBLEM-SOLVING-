# Write your MySQL query statement below
select Employee.name ,Bonus.bonus from Employee LEFT JOIN Bonus ON  Employee.empID = Bonus.empID WHERE bonus < 1000 or bonus is NULL