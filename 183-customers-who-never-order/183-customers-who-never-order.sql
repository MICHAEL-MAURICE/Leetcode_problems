/* Write your T-SQL query statement below */
select customers.name as 'Customers'
from customers
where customers.id not in
(
    select customerid from orders
);