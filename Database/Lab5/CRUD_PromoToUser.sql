USE Foodster
GO

ALTER PROCEDURE CRUD_PromoToUsr @status VARCHAR(50), @noOfRows INT
AS
BEGIN
	--INSERT
	DECLARE @fkPromoID INT
	DECLARE @fkUID INT

	SET @fkPromoID = (SELECT MAX(PromoID) FROM PROMO) + 1
	SET @fkUID = (SELECT MAX(UID) FROM USR) + 1

	DECLARE @n INT = 0
	WHILE @n < @noOfRows
	BEGIN
		INSERT INTO USR(UID, firstName, lastName, address, phoneNumber) VALUES (@fkUID,'a','b','c','d')
		INSERT INTO PROMO(PromoID, promoCode) VALUES (@fkPromoID,'1')
		INSERT INTO PromoToUsr(UID, PromoID, status) VALUES (@fkUID, @fkPromoID, @status)
		SET @n = @n + 1
	END

	--READ
	SELECT * 
	FROM PromoToUsr
	ORDER BY status

	--UPDATE
	UPDATE PromoToUsr SET status = 'enabled'
	WHERE UID = @fkUID AND PromoID = @fkPromoID

	SELECT * 
	FROM PromoToUsr
	ORDER BY status

	--DELETE
	DELETE FROM PromoToUsr
	WHERE UID = @fkUID AND PromoID = @fkPromoID AND status = @status

	SELECT * 
	FROM PromoToUsr
	ORDER BY status DESC
END