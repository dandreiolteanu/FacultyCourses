USE Foodster 
GO

CREATE PROCEDURE RunTableTestsProc @param INT
AS
BEGIN
	DECLARE @ds DATE
	DECLARE @de DATE
	DECLARE @exe VARCHAR(50)
	SET @exe = 'TestInsert' + CONVERT(VARCHAR(3), @param)
	SET @ds = GETDATE()
	EXECUTE @exe
	SET @de = GETDATE()
	INSERT INTO TestRunTables(TestRunID, TableID, StartAT, EndAt) VALUES (1, @param, @ds, @de)

	SET @exe = 'TestDelete' + CONVERT(VARCHAR(3), @param)
	SET @ds = GETDATE()
	EXECUTE @exe
	SET @de = GETDATE()
	INSERT INTO TestRunTables(TestRunID, TableID, StartAT, EndAt) VALUES (2, @param, @ds, @de)
END