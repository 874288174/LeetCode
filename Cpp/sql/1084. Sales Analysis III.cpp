select a.product_id, product_name
from Sales a
join Product b on a.product_id = b.product_id
group by product_id
having max(sale_date) <= '2019-03-31' and min(sale_date) >= '2019-01-01' 