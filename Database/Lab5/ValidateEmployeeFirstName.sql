USE Foodster
GO

CREATE OR ALTER FUNCTION ValidateEmployeeFirstName (@firstName VARCHAR(50))
RETURNS bit
AS
BEGIN
RETURN
(
SELECT 
	CASE
		WHEN @firstName is NULL THEN 0
		WHEN charindex(';', @firstName) <> 0 OR
			 charindex(':', @firstName) <> 0 OR
			 charindex('/', @firstName) <> 0 THEN 0
		ELSE 1
	END
)
END