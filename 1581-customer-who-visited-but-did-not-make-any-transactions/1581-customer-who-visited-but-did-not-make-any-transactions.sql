# Write your MySQL query statement below

select v.customer_id, count(*) as count_no_trans
from Visits v
where not exists (select *
                 from Transactions t
                 where v.visit_id = t.visit_id)
group by v.customer_id
