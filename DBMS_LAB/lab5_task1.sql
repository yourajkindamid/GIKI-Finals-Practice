create table Flights (
flno int primary key,
from_loc text,
to_loc text,
distance int, 
price int
);

create table Aircraft(
aid int primary key,
aname text,
cruisingrange int
);

create table Employees (
eid int primary key,
ename text,
salary int
);

create table Certified (
eid int,
foreign key (eid) references Employees(eid) on delete cascade,
aid int,
foreign key (aid) references Aircraft(aid) on delete cascade
);

insert into Flights values (222, 'Perth', 'London', 9000, 50000),
(333, 'Auckland', 'Dubai', 7000, 40000),
(444, 'Dallas', 'Sydney', 10000, 52000),
(555, 'LA', 'Singapore', 11000, 55000),
(666, 'UK', 'Atlanta', 15000, 60000);

insert into Aircraft values (111, 'AD Scout', 1000), 
(112, 'Airco', 15000), (113, 'Avis', 9000), (114, 'Bernard', 8000),
(115, 'Comte', 20000);

insert into Employees values (100, 'Oliver', 85000), (101, 'Jack', 50000),
(102, 'Thomas', 89000), (103, 'George', 10000), (105, 'James', 90000),
(106, 'Daneil', 100000), (107, 'Noah', 50000), (108, 'Joe', 25000),
(109, 'Pheebs', 90000), (110, 'Ross', 5000);

insert into Certified values (100, 114), (102, 113), (105, 112),
(106, 115), (107, 111), (109, 112);

-- question 1:
select eid, aname from Certified C, Aircraft A 
where C.aid = A.aid

-- question 2:
select C.eid, ename, aname from Certified C, Employees E, Aircraft A where C.eid = E.eid
and C.aid = A.aid

-- question 3:
select ename from Employees E where E.eid = (select C.eid from Certified C where C.aid = (select aid 
 from Aircraft A  where A.cruisingrange = (select max(cruisingrange) from Aircraft)))

-- question 4:
select ename, salary from Employees E where E.eid = (select C.eid from Certified C where C.aid = (select aid 
 from Aircraft A  where A.cruisingrange = (select max(cruisingrange) from Aircraft)))

-- question 5:
select aname from Aircraft A where A.cruisingrange > (select f.distance from
Flights f where f.from_loc = 'LA') order by A.cruisingrange desc
