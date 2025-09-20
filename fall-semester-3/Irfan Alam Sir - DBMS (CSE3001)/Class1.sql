DECLARE 
    l_commission   NUMBER;
    l_comm_missing EXCEPTION;
    emp_id         NUMBER := 101;   -- declare and set an employee_id
    bonus          NUMBER := 2000;  -- declare bonus value
BEGIN
    SELECT commission_pct / 100
    INTO l_commission
    FROM employees
    WHERE employee_id = emp_id;

    IF l_commission IS NULL THEN 
        RAISE l_comm_missing;
    ELSE 
        UPDATE employees
        SET salary = salary + (bonus * l_commission)
        WHERE employee_id = emp_id;
    END IF;

EXCEPTION
    WHEN l_comm_missing THEN 
        DBMS_OUTPUT.PUT_LINE('This Employee does not have a commission percentage.');
END;
/
