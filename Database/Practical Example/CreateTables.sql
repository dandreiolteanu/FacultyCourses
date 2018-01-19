USE PracticalExample
GO
IF OBJECT_ID('RoutesStations','U') IS NOT NULL
	DROP TABLE RoutesStations
IF OBJECT_ID('Stations','U') IS NOT NULL
	DROP TABLE Stations
IF OBJECT_ID('Routes','U') IS NOT NULL
	DROP TABLE [Routes]
IF OBJECT_ID('Trains','U') IS NOT NULL
	DROP TABLE Trains
IF OBJECT_ID('TrainTypes','U') IS NOT NULL
	DROP TABLE TrainTypes

CREATE TABLE TrainTypes
	(TTID TINYINT PRIMARY KEY IDENTITY(1,1),
	[Description] VARCHAR(50))


CREATE TABLE Trains
	(TID SMALLINT PRIMARY KEY IDENTITY(1,1),
		TName VARCHAR(50),
		TTID TINYINT REFERENCES TrainTypes(TTID))


CREATE TABLE [Routes]
	(RID SMALLINT PRIMARY KEY IDENTITY(1,1),
		RName VARCHAR(50),
		TID SMALLINT REFERENCES Trains(TID))


CREATE TABLE Stations
	([SID] SMALLINT PRIMARY KEY IDENTITY(1,1),
		SName VARCHAR(50))


CREATE TABLE RoutesStations
	(RID SMALLINT REFERENCES [Routes](RID),
	[SID] SMALLINT REFERENCES Stations(SID),
	Arrival TIME,
	DEPARTURE TIME,
	PRIMARY KEY(RID,[SID]))

GO

INSERT TrainTypes VALUES('regio'), ('interregio')
INSERT Trains VALUES('t1', 1), ('t2', 1), ('t3', 1)
INSERT [Routes] VALUES('r1', 1), ('r2', 2), ('r3',	 3)
INSERT Stations VALUES('s1'), ('s2'), ('s3')
INSERT RoutesStations(RID, [SID], Arrival, Departure) VALUES
(1,1,'6:00am','6:10am'), (1,2,'7:00am','7:10am'), (1,3,'8:00am','8:10am'),
(2,1,'5:50am','6:00am'),						  (2,3,'17:00','17:10'),
						 (3,2,'7:05am','7:15am'), (3,3,'18:00','18:10')


CREATE PROCEDURE uspStationOnRoute @RName VARCHAR(50), @SName VARCHAR(50), @Arrival TIME, @Departure TIME
AS
DECLARE @RID SMALLINT = (SELECT RID FROM [Routes] WHERE RName = @RName),
		@SID SMALLINT = (SELECT [SID] FROM Stations WHERE SName = @SName)
		--optionally.. @RID IS NOT NULL
		IF EXISTS (SELECT * FROM RoutesStations WHERE RID = @RID AND [SID] = @SID)
			UPDATE RoutesStations
			SET Arrival = @Arrival, Departure = @Departure
			WHERE RID = @RID AND [SID] = @SID
		ELSE
			INSERT RoutesStations(RID, [SID], Arrival, Departure) VALUES
			(@RID, @SID, @Arrival, @Departure)

GO
SELECT * FROM RoutesStations

EXEC uspStationOnRoute @RName = 'r2', @SName = 's2', @Arrival = '15:00', @Departure = '15:10'

GO
CREATE VIEW View_1
AS

	SELECT R.RName
	FROM [Routes] R
	WHERE NOT EXISTS
	(
		SELECT S.[SID]
		FROM Stations S
		EXCEPT
		SELECT RS.[SID]
		FROM RoutesStations RS
		WHERE RS.RID = R.RID
	)
GO 
SELECT * FROM View_1

CREATE FUNCTION ufStationsWithAtLeast2Trains()
RETURN TABLE
AS
	RETURN SELECT S.SName
	FROM Stations S
	WHERE S.[SID] IN
		(
			SELECT RS1.[SID]
			FROM RoutesStations RS1 INNER JOIN RoutesStations RS2
			ON RS1.[SID] = RS2.[SID] AND RS1.RID < RS2.RID AND
			RS1.Arrival <= RS2.Departure AND RS1.Departure >= RS2.Arrival
		)

GO
SELECT * FROM ufStationsWithAtLeast2Trains()







