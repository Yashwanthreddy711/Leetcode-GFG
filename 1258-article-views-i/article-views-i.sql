# Write your MySQL query statement below


select DISTINCT author_id as id
from Views
where author_id=viewer_id
group by article_id 
order by viewer_id  asc;




