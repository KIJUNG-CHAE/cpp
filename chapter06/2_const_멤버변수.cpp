//source error
#include<iostream>
#include<cstring>
using namespace std;
class Student{
	int id;//const int id;
	int age;
	char name[20];
	char major[20];
public:
	Student(int _id, int _age, char* _name,char* _major){
		id = _id;
		age = _age;
		strcpy(name,_name);
		strcpy(major,_major);
		
	}
	
void ShowData(){
	cout<<"1. �̸� : "<<name<<endl;
	cout<<"1. �� : "<<age<<endl;
	cout<<"1. �й�  : "<<id<<endl;
	cout<<"1. �а� : "<<major<<endl;
}

int main(){
	Student Kim(201911111,20,"honggildong","computer");//error
	Student Lee(201911111,19,"kimgildong","computer");//error
	Kim.ShowData();
	Lee.ShowData(); 
}
}; 
