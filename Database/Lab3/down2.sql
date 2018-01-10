CREATE PROCEDURE down2
AS
BEGIN
	ALTER TABLE RESTAURANT
	DROP column rating
	PRINT 'Dropped the column rating in RESTAURANT table'
END