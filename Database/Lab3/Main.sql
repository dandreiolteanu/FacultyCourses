CREATE PROCEDURE Proce @v INT
AS
BEGIN
	IF @v >= 1 AND @v <= 6
	BEGIN
		DECLARE @current INT = (SELECT TOP 1 VersionID FROM DBVersion)
		DECLARE @call VARCHAR(10)
		PRINT 'Starting version: ' + CONVERT(VARCHAR(1), @current)
		WHILE @current < @v
		BEGIN
			SET @call = 'up' + CONVERT(VARCHAR(3), @current)
			EXEC @call
			SET @current = @current + 1
		END
		UPDATE DBVersion SET VersionID = @v
		WHILE @current > @v
		BEGIN
			SET @call = 'down' + CONVERT(VARCHAR(3), @current - 1)
			EXEC @call
			SET @current = @current - 1
		END
		UPDATE DBVersion SET VersionID = @v
		SELECT TOP 1 @current = VersionID FROM DBVersion
		PRINT 'Ending version: ' + CONVERT(VARCHAR(1), @current)
	END
	ELSE
		BEGIN
			PRINT 'Invalid chosen step.'
		END
END
GO