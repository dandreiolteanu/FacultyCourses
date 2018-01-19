USE Foodster
GO

ALTER PROCEDURE CRUD_RESTAURANT @RID VARCHAR(50), @restaurantAddress VARCHAR(50), @restaurantType VARCHAR(50), @rating INT, @noOfRows INT
AS
BEGIN
	--INSERT
	DECLARE @n INT = 0
	WHILE @n < @noOfRows
	BEGIN
		INSERT INTO RESTAURANT(RID, restaurantAddress, restaurantType, rating) VALUES (@RID, @restaurantAddress, @restaurantType, @rating)
		SET @n = @n + 1
	END

	--READ
	SELECT * 
	FROM RESTAURANT
	ORDER BY rating DESC

	--UPDATE
	UPDATE RESTAURANT SET rating = 5
	WHERE RID = @RID

	SELECT * 
	FROM RESTAURANT
	ORDER BY rating DESC

	--DELETE
	DELETE FROM RESTAURANT
	WHERE RID = @RID

	SELECT * 
	FROM RESTAURANT
	ORDER BY rating DESC
END