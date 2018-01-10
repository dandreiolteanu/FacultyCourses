ALTER PROCEDURE up3
AS
BEGIN
	IF OBJECT_ID ('dbo.DISTRICT', 'U') IS NOT NULL DROP TABLE dbo.DISTRICT
	CREATE TABLE DISTRICT (
	   DistrictID int,
 	   name varchar(255),
	   zone varchar(255),
	)
	PRINT 'Created table'
END