CREATE DATABASE Foodster
GO
USE Foodster


CREATE TABLE RESTAURANT (
	RID						varchar(50)		PRIMARY KEY		NOT NULL,
	restaurantAddress		varchar(50)						NOT NULL,
	restaurantType			varchar(50)						NOT NULL

)


CREATE TABLE EMPLOYEE (
	EID						INT				PRIMARY KEY		NOT NULL,
	firstName				varchar(50)						NOT NULL,
	lastName				varChar(50)						NOT NULL,
	hoursWorked				INT								NOT NULL,
	dateOfBirth				DATE							NOT NULL,
	RID						varchar(50) FOREIGN KEY REFERENCES RESTAURANT(RID)
)


CREATE TABLE CATEGORIES (
	CID						INT				PRIMARY KEY		NOT NULL,
	categoryName			varchar(30)						NOT NULL,
	categoryImage			varchar(100)
)


CREATE TABLE USR (
	UID						INT				PRIMARY KEY		NOT NULL,
	firstName				varchar(50)						NOT NULL,
	lastName				varchar(50)						NOT NULL,
	address					varchar(50)						NOT NULL,
	phoneNumber				varchar(50)						NOT NULL
)


CREATE TABLE ORDR (
	OID						INT				PRIMARY KEY		NOT NULL,
	timeStamp				DATE							NOT NULL,
	paymentType				varchar(50)						CHECK(paymentType = 'Credit Card' OR paymentType = 'Cash'),
	total					float							NOT NULL,
	UID						INT				FOREIGN KEY REFERENCES USR(UID)
)

CREATE TABLE PROMO (
	PromoID					INT				PRIMARY KEY		NOT NULL,
	promoCode				varchar(15)
)


CREATE TABLE PromoToUsr (
	UID						INT				FOREIGN KEY REFERENCES USR(UID),
	PromoID					INT				FOREIGN KEY REFERENCES PROMO(PromoID),
	status					varchar(10)		CHECK(status = 'enabled' OR status = 'disabled')
	CONSTRAINT pk_PromoToUser				PRIMARY KEY(UID, PromoID)
)

	
CREATE TABLE DISH (
	DID						INT				PRIMARY KEY		NOT NULL,
	dishName				varchar(50)						NOT NULL,
	dishDescription			varchar(50)						NOT NULL,
	dishPrice				float							NOT NULL,
	dishImage				varchar(100)					NOT NULL,
	CID						INT				FOREIGN KEY REFERENCES CATEGORIES(CID),
	OID						INT				FOREIGN KEY REFERENCES ORDR(OID)
)

CREATE TABLE EXTRA (
	ExtraID					INT				PRIMARY	KEY,
	extraName				varchar(30),
	extraPrice				FLOAT,
	DID						INT				FOREIGN KEY REFERENCES DISH(DID)


)

CREATE TABLE CREDIT_CARD (
	CID						INT				PRIMARY KEY		NOT NULL,
	expirationDate			DATE							NOT NULL,
	CCV						INT								NOT NULL,
	UID						INT				FOREIGN KEY REFERENCES USR(UID)
)


