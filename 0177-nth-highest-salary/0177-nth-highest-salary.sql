CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    RETURN (
        SELECT salary
        FROM (
            SELECT 
                salary,
                DENSE_RANK() OVER (ORDER BY salary DESC) AS rnk
            FROM (
                SELECT DISTINCT salary
                FROM Employee
            ) AS e
        ) AS ranked
        WHERE rnk = N
    );
END