#include<iostream>
#include<fstream>
using namespace std;

int cusCount=0;
const int maxCustomer=10;//limitting the max no of customers to 10 as indicated by the 
string cusName[maxCustomer];
int cusId[maxCustomer];
int cusPamount[maxCustomer];
int cusFamount[maxCustomer];
//funcion to add customers 
void addCus()   
{
	cout<<"Enter the name of buyer "<<endl;
	cin>>cusName[cusCount];
	cout<<"Enter the id of the customer "<<endl;
	cin>>cusId[cusCount];
	cout<<"Enter the spent amount of the customer "<<endl;
	cin>>cusPamount[cusCount];
	//cout<<"Enter the Total amount spent by the customer "<<endl;
    //cin>>cusFamount[cusCount];
	if (cusPamount[cusCount]>2000)
	{
		cusFamount[cusCount]=cusPamount[cusCount]*90/100;
		cout<<"The discounted amount will be "<<cusFamount[cusCount]<<endl;
	}

	cusCount=cusCount + 1;
	
}
//function to display all current customers
void disCustomer()
{
	for(int i=0;i<cusCount;i++)
	{
		cout<<"The name of the customer is "<<cusName[i]<<endl;
		cout<<"The id of the customer is "<<cusId[i]<<endl;
		cout<<"The purchase amount  of the customer is "<<cusPamount[i]<<endl;
		cout<<"The final bill of the customer is "<<cusFamount[i]<<endl;
		
	}
}
//function to find customers by their ids
void findCusById()
{
	int searchId;
	cout<<"Add the id of the customer "<<endl;
	cin>>searchId;
	for(int i=0;i<cusCount;i++)
	{
		if(searchId==cusId[i])
		{
			cout<<"they are a customer "<<endl;
			cout<<"The name is "<<cusName[i]<<endl;
			cout<<"The purchase amount of the customer is "<<cusPamount[i]<<endl;
		}
	}
}
//functions to update their spent amount
void updPamount()
{
	int id;
	cout<<"Enetr the id of the customer whoms amount u want to update "<<endl;
	cin>>id;
	for(int i=0;i<cusCount;i++)
	{
		if (id==cusId[i])
		{
			int modam;
			cout<<"Enter the amount u want update it by "<<endl;
			cin>>modam;
			cusPamount[i]=cusPamount[i] + modam;
			cout<<"The  bill of the customer will be  "<<cusPamount[i]<<endl;
			return;
			
			if(cusPamount[cusCount]>2000 )
			{
				cusFamount[i]=cusPamount[i]*90/100;
				cout<<"The discounted bill will be "<<endl;
				cout<<cusFamount<<endl;
			}
		}
	}
}
// to find the revenue of the store
void callRev()
{
	long rev;
	for(int i=0;i<cusCount;i++)
	{
		rev=cusFamount[i]+rev;
		
	}
	cout<<"The total revnue is "<<rev<<endl;
}
	

int main()
{
    char opt;
    
	do
	{
		int work;
		switch(work);
		cout<<"This is a system to manage an online store "<<endl;
		cout<<"What do u want to do "<<endl;
		cout<<"Press 1 to add a customer "<<endl;
		cout<<"Press 2 to display all customers "<<endl;
		cout<<"Press 3 to find a customer by id "<<endl;
		cout<<"Press 4 to update their spent amount "<<endl;
		cout<<"Press 5 to see the total revenue "<<endl;
		cin>>work;
		switch(work)
		{
			case 1:
			{
			    addCus();	
			}
			break;
		case 2:
		    {
			    disCustomer();
			}	
			break;
		case 3:
		    {
		    findCusById();	
	        }
			break;	
		case 4:
			{
				updPamount();
			}
        break;
        case 5:
        	{
        		callRev();
			}
			break;
		}
		
        cout<<"Do u want to do this again   (press y if yes) "<<endl;
        cin>>opt;
	} while (opt=='Y'||opt=='y');
   
}
