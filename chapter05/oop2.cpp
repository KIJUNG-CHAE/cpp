#include<iostream>
#include<cstring>
using namespace std;

class Account{
	int id;
	int bal;
	char *name;
public:
	Account(const char *_name = "", int _id = 0, int _bal = 0){
		name = new char [strlen(_name)+1];
		strcpy(name,_name);
		id= _id;
		bal = _bal;	
	}
	~Account(){
		delete []name;
	}
	int GetId() {
		return id;
	}	
	int GetBal(){
		return bal;
	}		
	char* GetName(){
		return name;
	}
	
	void SetId(int _id){
		id=_id;
	}
	void SetBal(int _bal){
		bal=_bal;
}
	void AddMoney(int money){
		bal += money;
	}
	void MinusMoney(int money){
		bal -= money;
	}
	void ShowData(){
		cout<<"1. 계좌 ID : "<<id<<endl; 
		cout<<"2. 계좌 이름 : "<<name<<endl; 
		cout<<"3. 계좌 잔액 : "<<bal<<endl; 
		
	}
};
Account *pArr[100];//메모리 절약 
int index = 0;//전역변수를 초기화 시키지않으면 자동으로 0으로 초기화된다.
void PrintMenu();
void makeAccount();
void deposit();
void withdraw();
void inquiry();
void deleteAll();
int main(){
	int choice;
	while(1){
		PrintMenu();
		cin>>choice;
		if(choice == 0){
			deleteAll();
			}
		switch(choice){
			case 1: makeAccount(); break;
			case 2: deposit(); break;
			case 3: withdraw(); break;
			case 4: inquiry(); break; 
			case 5: deleteAll(); return -1; break;
			default: cout<<"Input Error"<<endl; return -1;
		}
	}
} 

void PrintMenu(){
	cout<<"=== menu ==="<<endl;
	cout<<"1.계좌개설"<<endl;
	cout<<"2.입    금"<<endl;
	cout<<"3.출    금"<<endl;
	cout<<"4.조    회"<<endl;
	cout<<"5.종    료"<<endl;
	cout<<"선     택 : " ;
}
void makeAccount(){
	char name[20];
	int id;
	int bal;
	cout<<"1.계좌명:"<<endl;
	cin>>name;
	cout<<"2.계좌id :"<<endl; 
	cin>>id;
	cout<<"3. 잔액 :"<<endl; 
	cin>>bal;
	pArr[index] = new Account(name,id,bal);
	index++;
}
void deposit(){
	int id, bal;
	cout<<"*입금할 ID :";
	cin>>id;
	cout<<"*추가 입금액 : ";
	cin>>bal;
	for(int i = 0;i<index; i++){
		if(id == pArr[i]->GetId()){
			pArr[i]->AddMoney(bal);//pArr[i]bal += bal;x
			return;
		}
	}
	cout<<"이 계좌는 유효하지 않습니다."<<endl;
}
void withdraw(){
	int id, bal;
	cout<<"*출금할 ID : ";
	cin>>id;
	cout<<"*추가 출금액 : ";
	cin>>bal;
	for(int i = 0;i<index; i++){
		if(id == pArr[i]->GetId()){
			if(pArr[i]->GetBal() < bal){
				cout<<"금액이 부족합니다"<<endl;
				return;
			}
			pArr[i]->MinusMoney(bal);//pArr[i]bal += bal;x
			return;
		}
	}
	cout<<"이 계좌는 유효하지 않습니다."<<endl;
}
void inquiry(){
	int i;
	for(i=0;i<index;i++){
		pArr[i]->ShowData();//포인터이므로 화살표  
	}
}
void deleteAll(){
	for(int i =0;i<index;i++){
		delete pArr[i];
	} 
}






