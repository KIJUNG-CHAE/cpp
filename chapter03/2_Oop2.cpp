#include<iostream>
using namespace std;

struct Account{
	char accId[20]; //구조체 안의 변수 : 멤버변수  
	char secId[20];
	char name[20];
	int balance;
	void deposit(int money) // 멤버함수. c에서는 안됨. 
	{
		balance += money;
	}
	void withdraw(int money)
	{
		balance -= money;
	}
}; 

//void deposit(Account a,int money)//call by value 
void deposit(Account &a,int money);//call by reference//전역함수 
void withdraw(Account &a,int money);//전역함 수  
int main()
{
	Account mine={"1234","1111","chae",10000};
	cout<<"acct id : "<<mine.accId<<endl;
	cout<<"secid : "<<mine.secId<<endl;
	cout<<"name : "<<mine.name<<endl;
	cout<<"balance : "<<mine.balance<<endl;
	cout<<endl<<"global function 을 이용한 잔액수정"<<endl;
	deposit(mine,20000);
	cout<<"20000원 입금후 balance : "<<mine.balance<<endl;
	withdraw(mine,10000);
	cout<<"10000원 출금후 balance : "<<mine.balance<<endl;
	
	cout<<endl<<"struct안의 memberfunction을 이용한 잔액수정"<<endl;
	mine.deposit(30000);
	cout<<"30000원 입금후 balance : "<<mine.balance<<endl;
	mine.withdraw(10000);
	cout<<"10000원 출금후 balance : "<<mine.balance<<endl;
}

void deposit(Account &a,int money)
{
	a.balance += money;
} 
void withdraw(Account &a,int money)
{
	a.balance -= money;
}
