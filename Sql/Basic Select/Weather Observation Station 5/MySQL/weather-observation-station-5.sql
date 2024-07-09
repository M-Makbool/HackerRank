(select city, LENGTH(city) as len from station order by len, city LIMIT 1)
UNION
(select city, LENGTH(city) as len from station order by len desc, city LIMIT 1);