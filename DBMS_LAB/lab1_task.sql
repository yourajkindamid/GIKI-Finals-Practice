create table department(
dep_id serial primary key, 
dep_name varchar(20) not null,
dep_location varchar(15) not null)


create table salary_grade(
grade serial primary key,
min_salary int not null,
max_salary int not null
)


CREATE table employees(
emp_id serial primary key,
emp_name varchar(15) not null,
job_name varchar(10) not null,
manager_id int,
hire_date date not null,
salary decimal(10, 2) not null,
commission decimal(7, 2),
dep_id int not null,
foreign key(dep_id)
references department(dep_id)
)



insert into department(dep_id)
values (1001)

insert into department(dep_id)
values (2001)

insert into department(dep_id)
values (3001)



DATA WAS INSERTED UPTILL 14 RECORDS

insert into employees (emp_id,emp_name,job_name,manager_id, hire_date, 
salary, commission, dep_id)
values (68319,'KAYLING','PRESIDENT',null,
'1991-11-18', 6000, null, 1001)
insert into employees (emp_id,emp_name,job_name,manager_id, hire_date, 
salary, commission, dep_id)
values (66928,'BLAZE','MANAGER',68319,
'1991-05-01', 2750, null, 3001)
insert into employees (emp_id,emp_name,job_name,manager_id, hire_date, 
salary, commission, dep_id)
values (65646,'JONAS','MANAGER',68319,
'1991-04-02', 2957, null, 2001)
...... AND SO ON TILL 14TH RECORD
