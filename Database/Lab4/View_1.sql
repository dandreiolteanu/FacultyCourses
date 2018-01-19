CREATE VIEW View_1
AS
SELECT DISH.dishName, DISH.dishDescription, DISH.dishPrice
FROM DISH
WHERE DISH.dishPrice > 99