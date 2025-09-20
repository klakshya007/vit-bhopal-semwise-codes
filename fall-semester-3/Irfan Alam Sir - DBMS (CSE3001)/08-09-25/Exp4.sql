CREATE TABLE Shipments (
    Ship_id        NUMBER PRIMARY KEY,
    Date_expected  DATE,
    Qty_expected   NUMBER,
    Description    VARCHAR2(100),
    Color          VARCHAR2(50),
    Qty_hand       NUMBER,
    Itemrate       NUMBER
);

SET SERVEROUTPUT ON;

DECLARE
    v_Ship_id       Shipments.Ship_id%TYPE := &Ship_id;  -- Input Ship ID
    v_Date_expected Shipments.Date_expected%TYPE;
    v_Qty_expected  Shipments.Qty_expected%TYPE;
    v_Description   Shipments.Description%TYPE;
    v_Color         Shipments.Color%TYPE;
    v_Qty_hand      Shipments.Qty_hand%TYPE;
BEGIN
    -- Implicit cursor with SELECT INTO
    SELECT Date_expected, Qty_expected, Description, Color, Qty_hand
    INTO   v_Date_expected, v_Qty_expected, v_Description, v_Color, v_Qty_hand
    FROM   Shipments
    WHERE  Ship_id = v_Ship_id;

    DBMS_OUTPUT.PUT_LINE('Ship ID       : ' || v_Ship_id);
    DBMS_OUTPUT.PUT_LINE('Date Expected : ' || TO_CHAR(v_Date_expected,'DD-MON-YYYY'));
    DBMS_OUTPUT.PUT_LINE('Qty Expected  : ' || v_Qty_expected);
    DBMS_OUTPUT.PUT_LINE('Description   : ' || v_Description);
    DBMS_OUTPUT.PUT_LINE('Color         : ' || v_Color);
    DBMS_OUTPUT.PUT_LINE('Qty on Hand   : ' || v_Qty_hand);

EXCEPTION
    WHEN NO_DATA_FOUND THEN
        DBMS_OUTPUT.PUT_LINE('No shipment found for Ship ID: ' || v_Ship_id);
    WHEN OTHERS THEN
        DBMS_OUTPUT.PUT_LINE('Error: ' || SQLERRM);
END;
/

