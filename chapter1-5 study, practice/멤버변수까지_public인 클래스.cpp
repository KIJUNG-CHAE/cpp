#include<iostream>
using namespace std;

class Account{
	public:
	char accid[20];
	char secid[20];
	char name[20];
	int bal;

	void diposit(int money){
		bal += money;
	}
	void withdraw(int money){
		bal -= money;
	}
	
};

void diposit(Account &a, int money);
void withdraw(Account &a, int money);

int main(){
	Account mine = {"1234", "abcd","mike",50000};
	cout<<"accid : "<<mine.accid<<endl;
	cout<<"secid : "<<mine.secid<<endl;
	cout<<"name : "<<mine.name<<endl;
	cout<<"bal : "<<mine.bal<<endl;
	
	cout<<"class안의 함수를 이용한 금액수정"<<endl;
	mine.diposit(20000);
	cout<<"+20000won "<<mine.bal<<endl;
	mine.withdraw(30000);
	cout<<"-30000won "<<mine.bal<<endl;
	
	cout<<"전역함수를 이용한 금액수정"<<endl;
	diposit(mine,20000);
	cout<<"+20000won "<<mine.bal<<endl;
	withdraw(mine,30000);
	cout<<"-30000won "<<mine.bal<<endl;
	
	
}

void diposit(Account &a, int money){
	a.bal += money;
}
void withdraw(Account &a, int money){
	a.bal -= money;
}

