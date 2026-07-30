with CTE AS 
(select (salary*months) total_sal,(select max(salary*months)  from employee) highsal  from employee)
select concat(highsal," ",count(*)) from cte where total_sal=highsal;