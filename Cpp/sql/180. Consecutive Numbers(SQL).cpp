select distinct l1.num as 'ConsecutiveNums'
from Logs l1
join Logs l2 on l1.Id = l2.Id - 1 and l1.Num = l2.Num
join Logs l3 on l2.Id = l3.Id - 1 and l2.Num = l3.Num;