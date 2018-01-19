USE Foodster
GO

CREATE OR ALTER FUNCTION ValidatePromoStatus (@status VARCHAR(50))
RETURNS bit
AS
BEGIN
RETURN
(
SELECT 
	CASE
		WHEN @status is NULL THEN 0
		WHEN @status NOT LIKE 'enabled' THEN 0
		WHEN @status NOT LIKE 'disabled' THEN 0
		ELSE 1
	END
)
END