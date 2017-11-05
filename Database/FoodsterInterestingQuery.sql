/*
	-This Query returns the "Top User" and the rest of the users and their total payings between 2 timeStamps.
	-A User is a "Top User" if the sum of the total payings between those 2 timeStamps is the highest, so the "Top User"
	will be the first one.
	-I think that a company can reward the "Top User" at the end of a month with a promoCode which gives him some discounts.

*/

SELECT topUsr.UID, USR.firstName, USR.lastName, topUsr.TotalBetweenDates FROM
(
SELECT ORDR.UID, SUM(total) AS TotalBetweenDates 
FROM ORDR 
WHERE ORDR.timeStamp > '2016-12-31' AND 
	  ORDR.timeStamp < '2017-02-01'
	  /*
	  I think checking the top user after a month is the best way to reward someone.
	  */
GROUP BY ORDR.UID 
) as topUsr
JOIN USR on USR.UID = topUsr.UID

ORDER BY TotalBetweenDates DESC;
