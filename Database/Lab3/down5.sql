CREATE PROCEDURE down5
AS
BEGIN
	ALTER TABLE JOBS
		DROP CONSTRAINT fk_JOBS_EMPLOYEE
	DROP TABLE JOBS
END