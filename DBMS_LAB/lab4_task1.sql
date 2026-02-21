create table customers (
customer_id int,
customer_reg_date date unique,
primary key (customer_id)
)

create table orders (
order_id int,
customer_id int,
customer_reg_date date,
foreign key(customer_reg_date) references customers (customer_reg_date) ON DELETE CASCADE,
order_date date CHECK (order_date > customer_reg_date),
foreign key(customer_id) references customers (customer_id) ON DELETE CASCADE,
primary key(order_id)
)

insert into customers values (1210, '1-1-2001'), (1211, '1-2-2002'), (1212, '1-5-2006')
insert into orders values (1, 1210, '1-1-2001', '1-2-2001')

select * from orders