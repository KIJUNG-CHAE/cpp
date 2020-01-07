#include<iostream>
#include<cstring>
using namespace std;

class Account{
	char* name;
	int id;
	int bal;
public:
	Account(const char* _name = "",const int _id = 0,const int _bal = 0){
		name = new char [strlen(_name)+1];
		strcpy(name,_name);
		id = _id;
		bal = _bal;
	}
	~Account(){
		delete name;
	}
	char* GetName(){
		return name;
	}
	int GetId(){
		return id;
	}
	int GetBal(){
		return bal;
	}
	void SetName(char* _name){
		strcpy(name,_name);		
	}
	void SetId(int _id){
		id = _id;
	}
	void SetBal(int _bal){
		bal = _bal;
	}
	void ShowData(){
		cout<<"사용자 이름 : "<<name<<endl;
		cout<<"사용자 아이디 : "<<id<<endl;
		cout<<"잔액 : "<<bal<<endl; 
	}
	void Addmoney(int _money){
		bal += _money;
	}

	void Minusmoney(int _money){
		bal -= _money;
	}
};
Account *arr[100];
int index = 0;
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
		if (choice ==0){
			return -1; 
		}
		switch (choice){
			case 1: makeAccount(); break; 
			case 2: deposit(); break; 
			case 3: withdraw(); break; 
			case 4: inquiry(); break; 
			case 5: deleteAll(); break; 
			default : cout<<"다시 입력하시오.";
		}
	}
}
 
void PrintMenu(){
	cout<<"M E N U"<<endl; 
	cout<<"1. 계좌생성"<<endl;
	cout<<"2. 입    금"<<endl;
	cout<<"3. 출    금"<<endl;
	cout<<"4. 조    회"<<endl;
	cout<<"5. 사용자 데이터 삭제"<<endl; 	
}

void makeAccount(){
	char name[20];
	int id;
	int bal;
	cout<<endl<<"사용자 이름 : ";
	cin>>name; 
	cout<<endl<<"사용자 아이디 : ";
	cin>>id;
	cout<<endl<<"잔액 : ";
	cin>>bal;
	arr[index] = new Account(name,id,bal);
	index++;
}
void deposit(){
	int id, bal;
	cout<<"입금할 사용자 id : ";
	cin>>id;
	cout<<"입금할 금액"<<endl;
	cin>>bal;
	for(int i =0;i<index;i++){
		if( id == arr[i]->GetId() ){
			arr[i]->Addmoney(bal);
			return; 
		}
	}
	cout<<"이계좌는 유효하지 않습니다."<<endl;	
}
void withdraw(){
	int id, bal;
	
	cout<<"출금할 사용자 id : ";
	cin>>id;
	cout<<"출금할 금액"<<endl;
	cin>>bal;
	for(int i =0;i<index;i++){
		if( id == arr[i]->GetId() ){
			if (bal > arr[i]->GetBal()) {
				cout<<"잔액부족"<<endl;
				return; 
			}
			else {
				arr[i]->Minusmoney(bal);
				return;
			}
		}
		
	}
	cout<<"이계좌는 유효하지 않습니다."<<endl;
}
void inquiry(){
	for(int i =0;i<index;i++){
		arr[i]->ShowData();
	}
}

void deleteAll(){
	for(int i = 0;i<index;i++){
	delete arr[i];
}
}
 
 
 
 
 
 
 
