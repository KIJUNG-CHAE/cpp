#include<iostream>
#include<cstring>
using namespace std;

int count = 1;
class Person{
	char name[20];
	int age;
public:
	Person(const char* _name,const int _age){
		strcpy(name, _name);
		age=_age;
		cout<<count++<<"��° Person��ü ���� "<<endl;
		 
	}
	void ShowData(){
		cout<<"name : "<<name<<" , "<<"age : "<<age<<endl<<endl;
	}
}; 

int main(){
	Person p1("Lee",13);
	Person p2("Kim",22);
}
