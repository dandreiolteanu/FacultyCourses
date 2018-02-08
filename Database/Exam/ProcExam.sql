USE [EXAM-DB]
GO

--2
ALTER PROC insertOrUpdateBuildingEmployee
	@BID INT,
	@EID INT,
	@dateOfFinalization DATE,
	@amountPerMonth INT
AS
BEGIN
	IF EXISTS (SELECT * FROM BuildingsEmployees WHERE BID = @BID AND EID = @EID)
		UPDATE BuildingsEmployees
		SET dateOfFinalization = @dateOfFinalization, amountPerMonth = @amountPerMonth
		WHERE BID = @BID AND EID = @EID
	ELSE
		INSERT BuildingsEmployees(EID, BID, dateOfFinalization, amountPerMonth) VALUES
		(@EID, @BID, @dateOfFinalization, @amountPerMonth)
END

EXEC insertOrUpdateBuildingEmployee 1, 1, '2050-01-03', 1000
EXEC insertOrUpdateBuildingEmployee 1, 3, '2099-01-03',555

SELECT * FROM BuildingsEmployees