Select w.id from Weather w cross join Weather w1 
where  w.temperature > w1.temperature and Datediff(w.recordDate,w1.recordDate) = 1;