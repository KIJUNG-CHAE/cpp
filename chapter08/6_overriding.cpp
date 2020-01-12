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
	void fct(){
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
