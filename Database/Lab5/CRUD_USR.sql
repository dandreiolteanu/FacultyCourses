USE Foodster
GO

ALTER PROCEDURE CRUD_USR @UID INT, @firstName VARCHAR(50), @lastName VARCHAR(50), @address VARCHAR(50), @phoneNumber VARCHAR(50)
AS
BEGIN
	--INSERT
	DECLARE @n INT = 0
	WHILE @n < @noOfRows
	BEGIN
		INSERT INTO USR(UID, firstName, lastName, address, phoneNumber) VALUES (@UID, @firstName, @lastName, @address, @phoneNumber)
		SET @n = @n + 1
	END

	--READ
	SELECT * 
	FROM USR
	ORDER BY firstName DESC

	--UPDATE
	UPDATE USR SET firstName = 'Zanzibar'
	WHERE UID = @UID

	SELECT * 
	FROM USR
	ORDER BY firstName DESC

	--DELETE
	DELETE FROM USR
	WHERE UID = @UID

	SELECT * 
	FROM USR
	ORDER BY firstName DESC
END