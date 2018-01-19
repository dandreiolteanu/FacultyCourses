USE Foodster
GO

DECLARE @ds DATE
DECLARE @de DATE
SET @ds = GETDATE()
INSERT INTO TestRuns(TestRunID, Description, StartAT, EndAt) VALUES (3, 'View', @ds, @ds)

EXECUTE RunViewTestsProc

SET @de = GETDATE()
UPDATE TestRuns
SET EndAt = @de
WHERE Description = 'View'

SET @ds = GETDATE()
INSERT INTO TestRuns(TestRunID, Description, StartAT, EndAt) VALUES (1, 'Insert', @ds, @ds)
INSERT INTO TestRuns(TestRunID, Description, StartAT, EndAt) VALUES (2, 'Delete', @ds, @ds)

EXECUTE RunTableTestsProc 3

SET @de = GETDATE()
UPDATE TestRuns
SET EndAt = @de
WHERE Description = 'Insert' OR Description = 'Delete'