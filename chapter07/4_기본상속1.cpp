#include<iostream>
#include<cstring>
using namespace std;

class Person{
	char name[20];
	int age;
public:
	Person(const char * _name = "", const int _age = 0){
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
	char* Getmajor(){
		return major;
	}
	void ShowData(){
		cout<<"1. name : "<<Getname()<<endl;
		cout<<"2. age : "<<Getage()<<endl;
		cout<<"3. major : "<<major<<endl;
	}
};

int main(){
	Student s1("computer");
	s1.ShowData(); 
}
