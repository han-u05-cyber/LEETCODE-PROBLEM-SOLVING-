SELECT 
    p.product_id,
    ROUND(
        IFNULL(SUM(p.price * u.units) / SUM(u.units), 0),
        2
    ) AS average_price
FROM Prices p
LEFT JOIN UnitsSold u
    ON p.product_id = u.product_id
    AND u.purchase_date BETWEEN p.start_date AND p.end_date
GROUP BY p.product_id;


##The most important trick in this question is putting the date condition inside the ON:

##AND u.purchase_date BETWEEN p.start_date AND p.end_date

##Don't put it in WHERE, because that can remove products that have no sales.