#include<iostream>
#include<cstring>
using namespace std;


class Person{
	char name[20];
	int age;
	static int count;//클래스에 디자인시 멤버변수안에 정적변수선언
					//정적변수를 초기화 시키지못해 에러발 생 
public:
	Person(const char* _name,const int _age){
		strcpy(name, _name);
		age=_age;
		cout<<count++<<"번째 Person객체 생성 "<<endl;
	}
	void ShowData(){
		cout<<"name : "<<name<<" , "<<"age : "<<age<<endl<<endl;
	}
}; 

int Person::count = 1;//정적변수의 초기화 
int main(){
	Person p1("Lee",13);
	Person p2("Kim",22);
}
