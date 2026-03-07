-- TASK 1
create table customers (
cust_id int primary key,
name text,
age int,
city text,
salary int
);

insert into customers values (111, 'ahmed', 22, 'karachi', 1300), (112, 'syed', 34, 'pindi', 12000),
(117, 'khurshed', 35, 'multan', 230400), (120, 'nafay', 22, 'islamabad', 1209);

insert into customers values (147, 'khurram', 25, 'multan', 2304), (125, 'kharal', 22, 'karachi', 3304),
(166, 'khalid', 25, 'pindi', 4304), (747, 'majid', 23, 'islamabad', 8304), (187, 'mojud', 26, 'multan', 10000);


select a.name as first_customer_name, a.salary as first_customer_salary, b.name as second_customer_name, b.salary 
as second_customer_salary, a.city as city from customers a, customers b where 
a.city = b.city and a.salary < b.salary;

-- TASK 2
create table orders (
order_id int primary key,
cust_id int,
order_date date,
amount int,
foreign key(cust_id) references customers(cust_id) on delete cascade
);

insert into orders values (301, 147, '8-18-2006', 499), (302, 125, '9-18-2006', 599), (303, 187, '8-13-2006', 999), (306, 747, '8-18-2009', 409), (320, 117, '4-4-2006', 499),
(350, 112, '6-6-2006', 300);

select customers.name, orders.order_id, orders.amount from customers, orders where orders.amount > 500 
and customers.cust_id = orders.cust_id;

-- TASK 3
create table departments (
dept_id int primary key, 
dept_name text
);

create table employees (
emp_id int primary key,
emp_name text,
dept_id int,
salary int,
foreign key(dept_id) references departments(dept_id) on delete cascade);

insert into departments values (112, 'finance'), (114, 'tech');
insert into employees values (122, 'khan', 112, 1000), (123, 'han', 114, 2000), (127, 'jan', 112, 6000), 
(132, 'drone', 114, 5000), (152, 'jimmy', 112, 1000), (142, 'saan', 114, 900), (192, 'aguero', 112, 500), 
(162, 'shane', 114 ,700);

select dept_name, sum(salary) as total_salary from departments natural join employees group by dept_name;