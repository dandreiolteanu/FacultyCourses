
CREATE TABLE OrderToDishes (
	OID						INT				FOREIGN KEY REFERENCES ORDR(OID),
	DID						INT				FOREIGN KEY REFERENCES DISH(DID),
	dishQuantity			INT				DEFAULT 1,
	CONSTRAINT pk_OrderToDishes				PRIMARY KEY(OID, DID)
)

ALTER TABLE DISH
DROP CONSTRAINT FK__DISH__OID__4BAC3F29

ALTER TABLE DISH
DROP COLUMN OID

ALTER TABLE ORDR 
ADD CONSTRAINT fk_RESTAURANT_RID FOREIGN KEY REFERENCES RESTAURANT(RID)

