#include<iostream>
using namespace std;

struct Account{
	char accId[20]; //����ü ���� ���� : �������  
	char secId[20];
	char name[20];
	int balance;
	void deposit(int money) // ����Լ�. c������ �ȵ�. 
	{
		balance += money;
	}
	void withdraw(int money)
	{
		balance -= money;
	}
}; 

//void deposit(Account a,int money)//call by value 
void deposit(Account &a,int money);//call by reference//�����Լ� 
void withdraw(Account &a,int money);//������ ��  
int main()
{
	Account mine={"1234","1111","chae",10000};
	cout<<"acct id : "<<mine.accId<<endl;
	cout<<"secid : "<<mine.secId<<endl;
	cout<<"name : "<<mine.name<<endl;
	cout<<"balance : "<<mine.balance<<endl;
	cout<<endl<<"global function �� �̿��� �ܾ׼���"<<endl;
	deposit(mine,20000);
	cout<<"20000�� �Ա��� balance : "<<mine.balance<<endl;
	withdraw(mine,10000);
	cout<<"10000�� ����� balance : "<<mine.balance<<endl;
	
	cout<<endl<<"struct���� memberfunction�� �̿��� �ܾ׼���"<<endl;
	mine.deposit(30000);
	cout<<"30000�� �Ա��� balance : "<<mine.balance<<endl;
	mine.withdraw(10000);
	cout<<"10000�� ����� balance : "<<mine.balance<<endl;
}

void deposit(Account &a,int money)
{
	a.balance += money;
} 
void withdraw(Account &a,int money)
{
	a.balance -= money;
}
