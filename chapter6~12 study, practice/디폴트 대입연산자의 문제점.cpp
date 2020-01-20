#include<iostream>
#include<cstring> 
using namespace std;

class Person{
	char* name;
public:
	Person(const char* _name){
		name = new char[strlen(_name)+1];
		strcpy(name,_name);
	}
	Person(const Person& p);
	~Person(){
		delete []name;
	}

	friend ostream& operator<<(ostream& os, Person& p);
};

ostream& operator<<(ostream& os, Person& p){
	os<<"name : "<<p.name<<endl;
	return os;
}
int main(){
	Person p1("LEE JUNE");
	Person p2("HONG KEN");
	cout<<p1<<endl;
	cout<<p2<<endl;

	
	p1=p2;//문제의 원인 
	
	cout<<p1<<endl;
	return 0;
}
