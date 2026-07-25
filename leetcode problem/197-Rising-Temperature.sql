# Write your MySQL query statement below
## here we use the concept of self join --> when ever we want to compare it self table .
select w1.id from Weather w1 JOIN  Weather w2 ON DATEDIFF(W1.recordDate , w2.recordDate) = 1 where w1.temperature > w2.temperature