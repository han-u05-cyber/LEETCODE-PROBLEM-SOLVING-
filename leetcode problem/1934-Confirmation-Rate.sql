# Write your MySQL query statement below
#We use SUM() because the CASE statement returns 1 or 0 for every row, and we #want to add all the 1s.
select s.user_id  , 
ROUND(IFNULL(sum(CASE      
    WHEN c.action = "confirmed" THEN 1
    ELSE NULL
END) / count(c.action) , 0),2) AS confirmation_rate
from 
Signups as s LEFT JOIN
Confirmations as c ON s.user_id = c.user_id  group by s.user_id