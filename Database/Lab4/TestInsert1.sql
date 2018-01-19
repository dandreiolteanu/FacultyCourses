USE Foodster
GO

CREATE PROCEDURE TestInsert1
AS
BEGIN
	DECLARE @pk1 VARCHAR(50)
	SELECT TOP 1 @pk1 = PROMO.PromoID FROM PROMO

	DECLARE @pk2 VARCHAR(50)
	SELECT TOP 1 @pk2 = USR.UID FROM USR

	DECLARE @NrOfRows INT
	SELECT  @NrOfRows = NrOfRows 
	FROM TestTables
	WHERE TableID = 3 AND TestID = 1

	DECLARE @n INT
	SET @n = 1

	SET @NrOfRows = @NrOfRows + @n

	WHILE @n < @NrOfRows
	BEGIN
		INSERT INTO PromoToUsr(PromoID, UID, status) VALUES (@pk1, @pk2, 'ok')
		SET @n = @n + 1
	END
END