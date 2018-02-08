USE [EXAM-DB]
GO

ALTER VIEW arhitectsWithMoreThan5
AS
	SELECT * FROM Arhitects
	WHERE Arhitects.numberOfDesigned >= 5

GO

SELECT * FROM arhitectsWithMoreThan5
