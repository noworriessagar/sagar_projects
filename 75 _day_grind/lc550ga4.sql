with cte1 as(select player_id,min(event_date) as firstlogin from activity group by player_id),
cte2 as(select distinct cte1.player_id from cte1 join activity on cte1.player_id=activity.player_id where activity.event_date=firstlogin+ interval 1 day)
select round((select count(*) from cte2) /(select count(*) from cte1 ),2) as fraction;
