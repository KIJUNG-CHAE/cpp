#include<iostream>
using namespace std;

class AAA{
public:
	AAA(){
		cout <<"AAA() 호출 : "<<this<<endl; 
	}
	~AAA(){
		cout <<"~AAA() 호출 : "<<this<<endl; 
	}
	virtual void fct(){//가짜다 벌쳐를 확인하면 클래스 를 뒤져 맞는 함수를 찾아서 실햇 ㅇ식킴스태틱바인딩 컴파일할땐모름 런타임일때 다이나믹 바인딩  
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
	
	AAA* a1 =  b1;//생성자 x 
	a1->fct();
	delete b1;
}
