WITH max_order_number AS (
    SELECT MAX(order_number) AS max_order
    FROM orders
)
SELECT customer_number
FROM orders
WHERE order_number = (SELECT max_order FROM max_order_number);
