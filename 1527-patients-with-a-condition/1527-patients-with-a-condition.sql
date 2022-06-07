/* Write your T-SQL query statement below */
select *
from Patients
where conditions like '% DIAB1%' or 
      conditions like 'DIAB1%'