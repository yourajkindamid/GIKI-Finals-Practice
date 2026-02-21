create table categories(
category_id int primary key
)

create table products (
price int not null,
discount int CHECK (price > discount),
product_name text unique,
category_id int default 1,
foreign key (category_id) references categories (category_id) on delete set default
)

insert into categories values (1)
insert into categories values (2)
insert into products values (1200, 12, 'whopper', 2)

select * from products
delete from categories where category_id=2
