#include<iostream>
#include<cstring>
using namespace std;

class AAA{
	char* str1;
public:
	AAA(const char* _str1 ){
		str1 = new char[strlen(_str1)+1];
		strcpy(str1,_str1);
		cout<<"AAA() 생성자호출 "<<endl; 
	}
	virtual ~AAA(){
		delete []str1;
		cout<<"AAA() 소멸자호출 "<<endl; 
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
		cout<<"BBB() 생성자호출 "<<endl; 
	}
	~BBB(){
		delete []str2;
		cout<<"BBB() 소멸자호출 "<<endl; 
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

//부모클래스는 virtual을 많이가지고있다 
//실제로 어떤함수를 쓴느지 그때그때 써야하기때 문  
//AAA* a = new BBB("good","evening"); 와같이 선언할경우 소멸자에도 virtual을 써야함. 
