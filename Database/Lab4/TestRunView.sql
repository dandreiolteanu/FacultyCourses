USE Foodster 
GO

CREATE PROCEDURE RunViewTestsProc
AS
BEGIN
	DECLARE @viewName1 VARCHAR(50)
	SELECT @viewName1 = Name
	FROM Views
	WHERE ViewID = 1

	DECLARE @s VARCHAR(50)
	SET @s = 'Run' + @viewName1

	DECLARE @ds1 DATE
	DECLARE @de1 DATE
	SET @ds1 = GETDATE()
	EXECUTE @s
	SET @de1 = GETDATE()
	INSERT INTO TestRunViews(TestRunID, ViewID, StartAT, EndAt) VALUES (3, 1, @ds1, @de1)
	




	DECLARE @viewName2 VARCHAR(50)
	SELECT @viewName2 = Name
	FROM Views
	WHERE ViewID = 2

	DECLARE @s2 VARCHAR(50)
	SET @s2 = 'Run' + @viewName2

	DECLARE @ds2 DATE
	DECLARE @de2 DATE
	SET @ds2 = GETDATE()
	EXECUTE @s2
	SET @de2 = GETDATE()
	INSERT INTO TestRunViews(TestRunID, ViewID, StartAT, EndAt) VALUES (3, 2, @ds2, @de2)
	




	DECLARE @viewName3 VARCHAR(50)
	SELECT @viewName3 = Name
	FROM Views
	WHERE ViewID = 3

	DECLARE @s3 VARCHAR(50)
	SET @s3 = 'Run' + @viewName3

	DECLARE @ds3 DATE
	DECLARE @de3 DATE
	SET @ds3 = GETDATE()
	EXECUTE @s3
	SET @de3 = GETDATE()
	INSERT INTO TestRunViews(TestRunID, ViewID, StartAT, EndAt) VALUES (3, 3, @ds3, @de3)
END