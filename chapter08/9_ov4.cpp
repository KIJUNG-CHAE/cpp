#include<iostream>
using namespace std;

class AAA{
public:
	AAA(){
		cout <<"AAA() 호출 : "<<this<<endl; 
	}
	virtual ~AAA(){
		cout <<"~AAA() 호출 : "<<this<<endl; 
	}
	virtual void fct(){//가짜다 벌쳐를 확인하면 클래스 를 뒤져 맞는 함수를 찾아서 실햇 ㅇ식킴 컴파일할땐모름 런타임일때 다이나믹 바인딩  
		cout<< "AAAdml fct()"<<endl;
	}
};

class BBB:public AAA{
public:
	BBB(){
		cout <<"BBB() 호출 : "<<this<<endl; 
	}
	~BBB(){
		cout<< "~BBB() 호출 : "<<this<<endl; 
	}
	void fct(){
		cout<< "BBBBdml fct()"<<endl;//벌쳐상속 이것도 가상 임  
	}
};

class CCC:public BBB{
public:
	CCC(){
		cout <<"CCC() 호출 : "<<this<<endl; 
	}
	~CCC(){
		cout<< "~CCC() 호출 : "<<this<<endl; 
	}
	void fct(){
		cout<< "CCC의 fct()"<<endl;
	}
};

int main(){
;
	
	BBB* b = new CCC;
	b->fct();//다이나믹 바인딩  

	AAA* a=b;
	a->fct();

	delete b;
	cout <<endl;
	BBB b1;
	b1.fct();//스태틱바인딩 
	return 0;
	//c가안없어지는이유 c인식이 안돼기때문에 소멸자가있어도 소멸이안됨.
	//소멸자에도 벌쳐가 붙어줘야함. 
}

