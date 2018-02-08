USE [EXAM-DB]
GO

--SELECT * FROM Employees
--SELECT * FROM BuildingsEmployees

ALTER FUNCTION lazyEmployees()
RETURNS TABLE
AS
	RETURN SELECT E.name as EName FROM Employees E
		WHERE E.EID NOT IN(SELECT DISTINCT EID FROM BuildingsEmployees)

GO

SELECT * FROM lazyEmployees()
