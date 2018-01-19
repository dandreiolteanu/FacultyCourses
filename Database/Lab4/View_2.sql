CREATE VIEW View_2
AS 
SELECT e.firstName, e.lastName, e.hoursWorked, e.RID
FROM EMPLOYEE e
INNER JOIN RESTAURANT r ON e.RID = r.RID
WHERE e.hoursWorked > 100 AND r.RID = 'Tokyo Restaurant'