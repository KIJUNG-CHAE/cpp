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
		cout.width(10); cout<<"�Ϲݰ���";
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
		cout.width(10); cout<<"�ſ����";
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
		cout.width(10); cout<<"��ΰ���";
		cout.width(10); cout<<GetId();
		cout.width(10); cout<<GetName();
		cout.width(10); cout<<bal<<endl;
	}
};

class AccManager{
	Account *pArr[100];//�޸� ���� 
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
	cout<<"1.���°���"<<endl;
	cout<<"2.��    ��"<<endl;
	cout<<"3.��    ��"<<endl;
	cout<<"4.��    ȸ"<<endl;
	cout<<"5.��αݾ�"<<endl;
	cout<<"6.��    ��"<<endl;
	cout<<"��     �� : " ;
}
void AccManager::makeAccount(){
	char name[20];
	int id, want=0;
	double bal;

	while(1){ //while�� ������ �ΰ������� �� �� 
		if(want == 1||want ==2|| want==3 ||want==9){
			break;
		}
		cout<<"<���ϴ� ���� ����>"<<endl<<"1.�Ϲݰ���"<<endl<<"2.�ſ����"<<endl<<"3.��ΰ���"<<endl<<"���� : ";
		cin>>want; 
		cout<<"1.���¸�:"<<endl;
		cin>>name;
		cout<<"2.����id :"<<endl; 
		cin>>id;
		cout<<"3. �ܾ� :"<<endl; 
		cin>>bal;
		switch (want){
			case 1:pArr[index] = new Account(name,id,bal);index++; break;
			case 2:pArr[index] = new CreditAccount(name,id,bal);index++; break;
			case 3:pArr[index] = new DonationAccount(name,id,bal); donate += bal*0.01; index++; break;
			default: cout<<"�߸��� ���������Դϴ�. �ٽ��Է����ֽʽÿ�"<<endl<<"���»����� �׸��ν÷��� '9'�� �Է��Ͻʽÿ�"<<endl;
		}
	}
}
void AccManager::deposit(){
	int id;
	double bal;
	double temp = 0;
	cout<<"*�Ա��� ID :";
	cin>>id;
	cout<<"*�߰� �Աݾ� : ";
	cin>>bal;
	for(int i = 0;i<index; i++){
		if(id == pArr[i]->GetId()){
			temp = pArr[i]->GetBal(); //��ü�� �ܰ� ������Ʈ�ϱ���  
			pArr[i]->AddMoney(bal);
			if((pArr[i]->GetBal() - temp) == bal*0.99) { //donate�� ��αݾ��� �����ϱ����� �ڵ�. //�� ���� ����ʿ�. donationAccount �� ��������� donate�� �����ϴ¹�! 
				donate += bal*0.01;
			}
//			if((pArr[i]->GetBal - pArr[i]->AddMoney(bal))== -1*(bal*0.99))//pArr[i]bal += bal;x
//				donate += bal*0.01;
			return;
		}
	}
	cout<<"�� ���´� ��ȿ���� �ʽ��ϴ�."<<endl;
}
void AccManager::withdraw(){
	int id;
	double bal;
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
void AccManager::inquiry(){
	int i;
	cout.width(10); cout<<"��������";
	cout.width(10); cout<<"id";
	cout.width(10); cout<<"name";
	cout.width(10); cout<<"bal"<<endl;
	for(i=0;i<index;i++){
		pArr[i]->ShowData();//�������̹Ƿ� ȭ��ǥ  
	}
}
void AccManager::deleteAll(){
	for(int i =0;i<index;i++){
		delete pArr[i];
	} 
}

void AccManager::donation(){
	cout<<"��αݾ��� "<<donate<<"�Դϴ�"<<endl;
}
