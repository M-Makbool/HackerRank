select top 1 city, LEN(city) as len from station order by len, city;
select top 1 city, LEN(city) as len from station order by len desc, city;