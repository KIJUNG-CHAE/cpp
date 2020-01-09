#include<iostream>
#include<cstring>
using namespace std;

class Person{
protected: //
	char name[20];
	int age;
public:
	Person(const char * _name = "noname", const int _age = 0){
		strcpy(name,_name);
		age=_age;
	}
	char* Getname(){
		return name;
	}
	int Getage(){
		return age;
	}
};

class Student:public Person{
	char major[20];
public:
	Student(const char* _major = ""){
		strcpy(major,_major);
	}
	Student(const char* _name ,const int _age,const char* _major):Person(_name,_age){
		strcpy(major,_major);
	}
	char* Getmajor(){
		return major;
	}
	void ShowData(){
		cout<<"1. name : "<<name<<endl;//getname을씰요가없음 
		cout<<"2. age : "<<age<<endl;//
		cout<<"3. major : "<<major<<endl;
	}
};

int main(){
	Student s1("computer");
	s1.ShowData(); 
	
	Student s2("honggildong",22,"computer");
	s2.ShowData();
}
