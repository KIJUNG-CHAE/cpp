#include<iostream>
using namespace std;

class AAA{
public:
	AAA(){
		cout <<"AAA() ȣ�� : "<<this<<endl; 
	}
	virtual ~AAA(){
		cout <<"~AAA() ȣ�� : "<<this<<endl; 
	}
	virtual void fct(){//��¥�� ���ĸ� Ȯ���ϸ� Ŭ���� �� ���� �´� �Լ��� ã�Ƽ� ���� ����Ŵ �������Ҷ��� ��Ÿ���϶� ���̳��� ���ε�  
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
		cout<< "BBBBdml fct()"<<endl;//���Ļ�� �̰͵� ���� ��  
	}
};

class CCC:public BBB{
public:
	CCC(){
		cout <<"CCC() ȣ�� : "<<this<<endl; 
	}
	~CCC(){
		cout<< "~CCC() ȣ�� : "<<this<<endl; 
	}
	void fct(){
		cout<< "CCC�� fct()"<<endl;
	}
};

int main(){
;
	
	BBB* b = new CCC;
	b->fct();//���̳��� ���ε�  

	AAA* a=b;
	a->fct();

	delete b;
	cout <<endl;
	BBB b1;
	b1.fct();//����ƽ���ε� 
	return 0;
	//c���Ⱦ����������� c�ν��� �ȵű⶧���� �Ҹ��ڰ��־ �Ҹ��̾ȵ�.
	//�Ҹ��ڿ��� ���İ� �پ������. 
}

