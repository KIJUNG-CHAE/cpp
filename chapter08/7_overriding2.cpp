#include<iostream>
using namespace std;

class AAA{
public:
	AAA(){
		cout <<"AAA() ȣ�� : "<<this<<endl; 
	}
	~AAA(){
		cout <<"~AAA() ȣ�� : "<<this<<endl; 
	}
	virtual void fct(){//��¥�� ���ĸ� Ȯ���ϸ� Ŭ���� �� ���� �´� �Լ��� ã�Ƽ� ���� ����Ŵ����ƽ���ε� �������Ҷ��� ��Ÿ���϶� ���̳��� ���ε�  
		cout<< "AAAdml fct()"<<endl;
	}
};

class BBB:public AAA{
public:
	BBB(){
		cout <<"BBB() ȣ�� : "<<this<<endl; 
	}
	~BBB(){
		cout<< "~BBB() ȣ�� : "<<this<<endl; 
	}
	void fct(){
		cout<< "BBBBdml fct()"<<endl;
	}
};

int main(){
	BBB b;
	b.fct();
	cout<<endl;
	
	BBB *b1 = new BBB;
	b1->fct();
	cout<<endl;
	
	AAA* a1 =  b1;//������ x 
	a1->fct();
	delete b1;
}
