#include<iostream>
using namespace std;

struct Account{
	char accId[20];
	char secId[20];
	char name[20];
	int balance;
}; 

//void deposit(Account a,int money)//call by value 
void deposit(Account &a,int money);//call by reference//전역함수 
void withdraw(Account &a,int money);//전역함 수  
int main()
{
	Account mine={"1234","1111","chae",10000};
	cout<<"accid : "<<mine.accId<<endl;
	cout<<"secid : "<<mine.secId<<endl;
	cout<<"name : "<<mine.name<<endl;
	cout<<"balance : "<<mine.balance<<endl;
	deposit(mine,20000);
	cout<<"balance : "<<mine.balance<<endl;
	withdraw(mine,10000);
	cout<<"balance : "<<mine.balance<<endl;
}

void deposit(Account &a,int money)
{
	a.balance += money;
} 
void withdraw(Account &a,int money)
{
	a.balance -= money;
}
