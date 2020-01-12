#include<iostream>
#include<cstring>
using namespace std;

class AAA{
	char* str1;
public:
	AAA(const char* _str1 ){
		str1 = new char[strlen(_str1)+1];
		strcpy(str1,_str1);
		cout<<"AAA() ������ȣ�� "<<endl; 
	}
	virtual ~AAA(){
		delete []str1;
		cout<<"AAA() �Ҹ���ȣ�� "<<endl; 
	}
	virtual void ShowString(){
		 cout<<"str1 : "<<str1;
	}
};

class BBB:public AAA{
	char* str2;
public:
	BBB(const char *_str1, const char* _str2 ):AAA(_str1){
		str2 = new char[strlen(_str2)+1];
		strcpy(str2,_str2);
		cout<<"BBB() ������ȣ�� "<<endl; 
	}
	~BBB(){
		delete []str2;
		cout<<"BBB() �Ҹ���ȣ�� "<<endl; 
	}
	void ShowString(){
		AAA::ShowString();
		cout<<" str2 : "<<str2<<endl;
	}
};

int main(){
	
	AAA* a = new BBB("good","evening"); 
	a->ShowString();
	delete a;
}

//�θ�Ŭ������ virtual�� ���̰������ִ� 
//������ ��Լ��� ������ �׶��׶� ����ϱ⶧ ��  
//AAA* a = new BBB("good","evening"); �Ͱ��� �����Ұ�� �Ҹ��ڿ��� virtual�� �����. 
