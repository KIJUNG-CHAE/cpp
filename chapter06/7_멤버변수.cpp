#include<iostream>
#include<cstring>
using namespace std;


class Person{
	char name[20];
	int age;
	int count;
public:
	Person(const char* _name,const int _age){
		strcpy(name, _name);
		age=_age;
		count = 1;
		cout<<count++<<"번째 Person객체 생성 "<<endl;
	}
	void ShowData(){
		cout<<"name : "<<name<<" , "<<"age : "<<age<<endl<<endl;
	}
}; 

int main(){
	Person p1("Lee",13);
	Person p2("Kim",22);
}
