-- select salary from (select salary,Dense_rank() over(order by salary desc)as rnk from employee) as temp where rnk = n;
-- SELECT DISTINCT salary 
-- FROM (
--     SELECT salary, 
--            DENSE_RANK() OVER (ORDER BY salary DESC) AS rnk 
--     FROM employee
-- ) AS temp 
-- WHERE rnk = n;
create function getNthHighestSalary(n int)returns INT
BEGIN
set n = n-1;
return(
    select distinct salary from employee 
    order by salary desc
    limit 1 offset n
);
end


-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna