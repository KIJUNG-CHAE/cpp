#include<iostream>
#include<cstring>
using namespace std;

class Account{
	double id;
	double bal;
	char *name;
public:
	Account(const char *_name = "", int _id = 0, double _bal = 0){
		name = new char [strlen(_name)+1];
		strcpy(name,_name);
		id= _id;
		bal = _bal;	
	}
	Account(Account &a){
		name = new char [strlen(a.name)+1];
		strcpy(name,a.name);
		id= a.id;
		bal = a.bal;	
	}
	virtual ~Account(){
		delete []name;
	}
	int GetId() {
		return id;
	}	
	virtual double GetBal(){
		return bal;
	}		
	char* GetName(){
		return name;
	}
	
	void SetId(int _id){
		id=_id;
	}
	virtual void SetBal(double _bal){
		bal=_bal;
}
	virtual void AddMoney(double money){
		bal += money;
	}
	void MinusMoney(double money){
		bal -= money;
	}
	virtual void ShowData(){
		cout.width(10); cout<<"일반계좌";
		cout.width(10); cout<<id;
		cout.width(10); cout<<name;
		cout.width(10); cout<<bal<<endl;
	}
};
class CreditAccount:public Account{
	double bal;
public:
	CreditAccount(const char *_name = "", int _id = 0, double _bal = 0):Account(_name,_id){
	bal = 1.01*_bal;
	}
	//CreditAccount(CreditAccount &a):Account(a){}
	//~CreditAccount(){}
	void SetBal(double _bal){
		bal=_bal*1.01;
	}
	void AddMoney(double money){
		bal += money*1.01;	
	}
	void ShowData(){
		cout.width(10); cout<<"신용계좌";
		cout.width(10); cout<<GetId();
		cout.width(10); cout<<GetName();
		cout.width(10); cout<<bal<<endl;
	}
};
class DonationAccount:public Account{
	double bal;
public:
	DonationAccount(const char *_name = "", int _id = 0, double _bal = 0):Account(_name,_id){
	bal = 0.99*_bal;
	}
	//CreditAccount(CreditAccount &a):Account(a){}
	//~CreditAccount(){}
	void SetBal(double _bal){
		bal=_bal*0.99;
	}
	double GetBal(){
		return bal;
	}
	void AddMoney(double money){
		bal += money*0.99;
	}
	void ShowData(){
		cout.width(10); cout<<"기부계좌";
		cout.width(10); cout<<GetId();
		cout.width(10); cout<<GetName();
		cout.width(10); cout<<bal<<endl;
	}
};

class AccManager{
	Account *pArr[100];//메모리 절약 
	static int index ;
	static double donate; 
public:
//	AccManager()
	void PrintMenu();
	void makeAccount();
	void deposit();
	void withdraw();
	void inquiry();
	void donation();
	void deleteAll();
};
int AccManager::index = 0;
double AccManager::donate = 0;


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
			case 5: acc.donation(); break; 
			case 6: acc.deleteAll(); return -1; break;
			default: cout<<"Input Error"<<endl; return -1;
		}
	}
} 

void AccManager::PrintMenu(){
	cout<<"=== menu ==="<<endl;
	cout<<"1.계좌개설"<<endl;
	cout<<"2.입    금"<<endl;
	cout<<"3.출    금"<<endl;
	cout<<"4.조    회"<<endl;
	cout<<"5.기부금액"<<endl;
	cout<<"6.종    료"<<endl;
	cout<<"선     택 : " ;
}
void AccManager::makeAccount(){
	char name[20];
	int id, want=0;
	double bal;

	while(1){ //while에 조건을 두개넣으면 안 됨 
		if(want == 1||want ==2|| want==3 ||want==9){
			break;
		}
		cout<<"<원하는 계좌 종류>"<<endl<<"1.일반계좌"<<endl<<"2.신용계좌"<<endl<<"3.기부계좌"<<endl<<"선택 : ";
		cin>>want; 
		cout<<"1.계좌명:"<<endl;
		cin>>name;
		cout<<"2.계좌id :"<<endl; 
		cin>>id;
		cout<<"3. 잔액 :"<<endl; 
		cin>>bal;
		switch (want){
			case 1:pArr[index] = new Account(name,id,bal);index++; break;
			case 2:pArr[index] = new CreditAccount(name,id,bal);index++; break;
			case 3:pArr[index] = new DonationAccount(name,id,bal); donate += bal*0.01; index++; break;
			default: cout<<"잘못된 계좌종류입니다. 다시입력해주십시오"<<endl<<"계좌생성을 그만두시려면 '9'을 입력하십시오"<<endl;
		}
	}
}
void AccManager::deposit(){
	int id;
	double bal;
	double temp = 0;
	cout<<"*입금할 ID :";
	cin>>id;
	cout<<"*추가 입금액 : ";
	cin>>bal;
	for(int i = 0;i<index; i++){
		if(id == pArr[i]->GetId()){
			temp = pArr[i]->GetBal(); //객체의 잔고를 업데이트하기전  
			pArr[i]->AddMoney(bal);
			if((pArr[i]->GetBal() - temp) == bal*0.99) { //donate에 기부금액을 저장하기위한 코드. //더 좋은 방법필요. donationAccount 에 멤버변수로 donate를 설정하는법! 
				donate += bal*0.01;
			}
//			if((pArr[i]->GetBal - pArr[i]->AddMoney(bal))== -1*(bal*0.99))//pArr[i]bal += bal;x
//				donate += bal*0.01;
			return;
		}
	}
	cout<<"이 계좌는 유효하지 않습니다."<<endl;
}
void AccManager::withdraw(){
	int id;
	double bal;
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
void AccManager::inquiry(){
	int i;
	cout.width(10); cout<<"계좌종류";
	cout.width(10); cout<<"id";
	cout.width(10); cout<<"name";
	cout.width(10); cout<<"bal"<<endl;
	for(i=0;i<index;i++){
		pArr[i]->ShowData();//포인터이므로 화살표  
	}
}
void AccManager::deleteAll(){
	for(int i =0;i<index;i++){
		delete pArr[i];
	} 
}

void AccManager::donation(){
	cout<<"기부금액은 "<<donate<<"입니다"<<endl;
}
