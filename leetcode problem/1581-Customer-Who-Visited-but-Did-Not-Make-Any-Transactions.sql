# Write your MySQL query statement below
SELECT 
    customer_id , COUNT(visit_id) as count_no_trans
from Visits where visit_id NOT IN(select visit_id from Transactions) group by customer_id;