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
		cout<<"1. ���� ID : "<<id<<endl; 
		cout<<"2. ���� �̸� : "<<name<<endl; 
		cout<<"3. ���� �ܾ� : "<<bal<<endl; 
		
	}
};
Account *pArr[100];//�޸� ���� 
int index = 0;//���������� �ʱ�ȭ ��Ű�������� �ڵ����� 0���� �ʱ�ȭ�ȴ�.
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
	cout<<"1.���°���"<<endl;
	cout<<"2.��    ��"<<endl;
	cout<<"3.��    ��"<<endl;
	cout<<"4.��    ȸ"<<endl;
	cout<<"5.��    ��"<<endl;
	cout<<"��     �� : " ;
}
void makeAccount(){
	char name[20];
	int id;
	int bal;
	cout<<"1.���¸�:"<<endl;
	cin>>name;
	cout<<"2.����id :"<<endl; 
	cin>>id;
	cout<<"3. �ܾ� :"<<endl; 
	cin>>bal;
	pArr[index] = new Account(name,id,bal);
	index++;
}
void deposit(){
	int id, bal;
	cout<<"*�Ա��� ID :";
	cin>>id;
	cout<<"*�߰� �Աݾ� : ";
	cin>>bal;
	for(int i = 0;i<index; i++){
		if(id == pArr[i]->GetId()){
			pArr[i]->AddMoney(bal);//pArr[i]bal += bal;x
			return;
		}
	}
	cout<<"�� ���´� ��ȿ���� �ʽ��ϴ�."<<endl;
}
void withdraw(){
	int id, bal;
	cout<<"*����� ID : ";
	cin>>id;
	cout<<"*�߰� ��ݾ� : ";
	cin>>bal;
	for(int i = 0;i<index; i++){
		if(id == pArr[i]->GetId()){
			if(pArr[i]->GetBal() < bal){
				cout<<"�ݾ��� �����մϴ�"<<endl;
				return;
			}
			pArr[i]->MinusMoney(bal);//pArr[i]bal += bal;x
			return;
		}
	}
	cout<<"�� ���´� ��ȿ���� �ʽ��ϴ�."<<endl;
}
void inquiry(){
	int i;
	for(i=0;i<index;i++){
		pArr[i]->ShowData();//�������̹Ƿ� ȭ��ǥ  
	}
}
void deleteAll(){
	for(int i =0;i<index;i++){
		delete pArr[i];
	} 
}






