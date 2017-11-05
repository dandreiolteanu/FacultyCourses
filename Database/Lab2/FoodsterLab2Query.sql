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

/*
# 1. Gets the name and the number of orders from
#    each user.
# 
*/
SELECT USR.UID, USR.firstName, USR.lastName, COUNT(ORDR.OID) AS NumberOfOrders
FROM (ORDR
INNER JOIN USR ON ORDR.UID = USR.UID
)
GROUP BY USR.UID, USR.firstName, USR.lastName
HAVING COUNT(ORDR.OID) > 1;
/*
# 2. Gets the Total Price per each category of Dishes, also with the 
#	 name of each Category
#
*/
SELECT DISH.CID, CATEGORIES.categoryName, SUM(DISH.dishPrice) AS TOTAL_PRICE_PER_CATEGORY
FROM DISH
INNER JOIN CATEGORIES ON DISH.CID = CATEGORIES.CID
GROUP BY DISH.CID, CATEGORIES.categoryName
ORDER BY TOTAL_PRICE_PER_CATEGORY DESC;

/*
# 3. Gets all dishes from it's category where the price
#    is greater than 100.
# 
*/
SELECT CATEGORIES.categoryName, DISH.dishName, DISH.dishPrice
FROM DISH
INNER JOIN CATEGORIES ON DISH.CID = CATEGORIES.CID
WHERE CATEGORIES.categoryName = 'Sushi Plates' AND DISH.dishPrice > 100 

/*
# 4. Gets the order id, time stamp, user first name, last name and the
#    the names of the dishes in that order for a client in a specified
#    date.
*/
SELECT O.OID, O.timeStamp, U.firstName, U.lastName, D.dishName
FROM ORDR O INNER JOIN OrderToDishes OD ON O.OID = OD.OID
INNER JOIN DISH D ON OD.DID = D.DID
INNER JOIN USR U ON O.UID = U.UID
WHERE U.firstName ='Andrei' AND U.lastName = 'Olteanu'
AND O.timeStamp = '2017-01-01'

/*
# 5. Gets the name of a user and it's promo name
#    if a promo is enabled to that user. 
#
*/
SELECT U.firstName, U.lastName, P.promoCode
FROM USR U INNER JOIN PromoToUsr PU ON U.UID = PU.UID
INNER JOIN PROMO P ON P.PromoID = PU.PromoID
WHERE PU.status = 'enabled'

/*
# 6. Gets name of the user, the order total, and the card details
#	 for orders with the total over 300 and payed with credit card.
#
*/
SELECT O.OID, U.UID, U.firstName, U.lastName, O.total, O.timeStamp
FROM ORDR O INNER JOIN USR U ON O.UID = U.UID
WHERE O.total >= 300 AND O.paymentType = 'credit card'
ORDER BY O.total DESC

/*
#
# 7. Gets the number of Dishes per each Category also with the category
#    name.
#
*/
SELECT DISH.CID, CATEGORIES.categoryName, COUNT(*) AS TOTAL_DISHES_PER_CATEGORY
FROM DISH
INNER JOIN CATEGORIES ON CATEGORIES.CID = DISH.CID
GROUP BY DISH.CID, CATEGORIES.categoryName
ORDER BY TOTAL_DISHES_PER_CATEGORY DESC;

/*
# 8. Gets all the orders and names of the user 
#    if a restaurant type is Japanese.
#
*/

SELECT O.OID, U.UID, U.firstName, U.lastName, O.total, R.RID, R.restaurantType
FROM ORDR O INNER JOIN RESTAURANT R ON O.RID = R.RID
INNER JOIN USR U ON O.UID = U.UID
WHERE R.restaurantType = 'Japanese'
ORDER BY O.total DESC

/*
# 9. Gets the user which payed with credit card and 
#    had a promoCode enabled.
#
*/
SELECT U.UID, U.firstName, U.lastName, O.paymentType, O.total, PU.status, P.promoCode
FROM USR U INNER JOIN ORDR O ON U.UID = O.UID
INNER JOIN PromoToUsr PU ON U.UID = PU.UID
INNER JOIN PROMO P ON P.PromoID = PU.PromoID
WHERE O.paymentType = 'credit card' AND PU.status = 'enabled'
ORDER BY O.total DESC

/*
# 10. Gets the dishes which have something extra
#     with the dish name, category name and extra 
#	  name and extra price
#
*/
SELECT C.categoryName, D.dishName, E.extraName, E.extraPrice
FROM DISH D INNER JOIN EXTRA E ON D.DID = E.DID
INNER JOIN CATEGORIES C ON C.CID = D.CID
WHERE E.extraPrice = 0

