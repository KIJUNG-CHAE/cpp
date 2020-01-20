#include<iostream>
#include<cstring>
using namespace std;

class Account{
	char* name;
	int bal; //세미콜론  
	int id;
public:
	Account(const char* _name="", const int _id=0,const int _bal = 0 ){
		name = new char[strlen(_name)+1];
		strcpy(name,_name);
		id=_id;
		bal=_bal;
	}
	Account(const Account& a){
		name = new char[strlen(a.name)+1];
		strcpy(name,a.name);
		id=a.id;
		bal=a.bal;
	}
	virtual ~Account(){
		delete []name;
	}
	
	char* getName(){
		return name;
	}
	int getId(){
		return id;
	}
	int getBal(){
		return bal;
	}
	void setBal(int _bal){
		bal = _bal;
	}
	virtual void AddMoney(int money){
		bal += money;
	}
	void MinusMoney(int money){
		bal -= money;
	}
	virtual void ShowData(){
		cout<<"name : "<<name<<endl;
		cout<<"i d : "<<id<<endl;
		cout<<"balance : "<<bal<<endl<<endl;
	}
	
};
class FaithAccount:public Account{
public:
	FaithAccount(const char* _name="", const int _id=0,int _bal = 0 ):Account(_name,_id,_bal*1.01){}
	
	void AddMoney(int money){//void AddMoney(){
		Account::AddMoney(money*1.01);//bal += money*1.01;
	}
//	void ShowData(int money){
//		Account::ShowData();
////		cout<<"name : "<<getName()<<endl;
////		cout<<"i d : "<<getId()<<endl;
////		cout<<"balance : "<<getBal()<<endl<<endl;
//	}
};
class ContriAccount:public Account{
	int contri;
public:
	ContriAccount(const char* _name="", const int _id=0,int _bal = 0 ):Account(_name,_id,_bal*0.99){ //생성자가 FaithAccount로 되어있었음  
		contri = _bal*0.01;
	}
	void AddMoney(int money){
		Account::AddMoney(money*0.99);
		contri += money*0.01;//안적음. 
	}
	void ShowData(){
		Account::ShowData();
//		cout<<"name : "<<name<<endl;
//		cout<<"i d : "<<id<<endl;
//		cout<<"balance : "<<bal<<endl;
		cout<<"contribute : "<<contri<<endl<<endl;
	}
};


class AccManager{
	Account *pArr[100];//메모리 절약 
	static int index;
public:
	void PrintMenu()const;
	void makeAccount();
	void deposit()const;
	void withdraw()const;
	void inquiry()const;
	void deleteAll()const;
};

int AccManager::index=0;

void AccManager::PrintMenu()const{
	cout<<"===menu==="<<endl;
	cout<<"1.계좌개설"<<endl; 
	cout<<"2.입    금"<<endl; 
	cout<<"3.출    금"<<endl; 
	cout<<"4.조    회"<<endl; 
	cout<<"5.종    료"<<endl; 
	cout<<"선     택:"; 
}

void AccManager::makeAccount(){
	
	int whatAcc,id,bal;
	char name[20];
	cout<<"계좌종류"<<endl;
	cout<<"1.일반계좌"<<endl;
	cout<<"2.신용계좌"<<endl;
	cout<<"3.기부계좌"<<endl;
	cout<<"선택 : ";
	cin>>whatAcc;
	cout<<"name : ";
	cin>>name;
	cout<<"i d : ";
	cin>>id;
	cout<<"balance : ";
	cin>>bal;
	switch(whatAcc){
		case 1:pArr[index] = new Account(name,id,bal);index++;break;	//		case 1:pArr[i]->Account(name,id,bal);index++;break;
		case 2:pArr[index] = new FaithAccount(name,id,bal);index++;break;
		case 3:pArr[index] = new ContriAccount(name,id,bal);index++;break;
	}
}

void AccManager::deposit()const{//void AccManager::deposit(){
	int find, money;
	cout<<"입금할 계좌 id : ";
	cin>>find;
	cout<<endl<<"금액 : ";
	cin>>money; 
	for(int i = 0;i<index;i++){
		if(pArr[i]->getId()== find){
			pArr[i]->AddMoney(money);
		}
	}
}
void AccManager::withdraw()const{
	int find, money;
	cout<<"출금할 계좌 id : ";
	cin>>find;
	cout<<endl<<"금액 : ";
	cin>>money; 
	for(int i = 0;i<index;i++){
		if(pArr[i]->getId()== find){
			if(pArr[i]->getBal() >= money){
				pArr[i]->MinusMoney(money);
			}
		else{
			cout<<"계좌 잔액이 부족합니다."<<endl;
			}
		}
	}
}
void AccManager::inquiry()const{
	for(int i = 0;i<index;i++){
		pArr[i]->ShowData();
	}
}
void AccManager::deleteAll()const{
	for(int i = 0;i<index;i++){
		delete pArr[i];
	}
}




int main(){
	int choice;
	AccManager acc;
	while(1){
		acc.PrintMenu();
		cin>>choice;
		if(choice == 0){
			acc.deleteAll();
			}
		switch(choice){
			case 1: acc.makeAccount(); break;
			case 2: acc.deposit(); break;
			case 3: acc.withdraw(); break;
			case 4: acc.inquiry(); break; 
			case 5: acc.deleteAll(); return -1; break;
			default: cout<<"Input Error"<<endl; return -1;
		}
	}
} 
