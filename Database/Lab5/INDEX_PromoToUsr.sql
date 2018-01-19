USE Foodster
GO
IF EXISTS (SELECT name FROM sys.indexes WHERE name = N'N_idx_PromoID')
	DROP INDEX N_idx_PromoID ON PromoToUsr
GO

CREATE NONCLUSTERED INDEX N_idx_PromoID ON PromoToUsr (PromoID)
GO




USE Foodster
GO
IF EXISTS (SELECT name FROM sys.indexes WHERE name = N'N_idx_dishName')
	DROP INDEX N_idx_dishName ON DISH
GO

CREATE NONCLUSTERED INDEX N_idx_dishName ON DISH (dishName)
GO

USE Foodster
GO
IF EXISTS (SELECT name FROM sys.indexes WHERE name = N'N_idx_EfirstName')
	DROP INDEX N_idx_EfirstName ON EMPLOYEE
GO

CREATE NONCLUSTERED INDEX N_idx_EfirstName ON EMPLOYEE (firstName)
GO