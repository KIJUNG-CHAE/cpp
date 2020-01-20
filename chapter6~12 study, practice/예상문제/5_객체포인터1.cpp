#include<iostream>
using namespace std;

class Person{
public:
	void sleep(){
		cout<<"sleep"<<endl;
	}
}; 
class Student:public Person{
	public:
	void study(){
		cout<<"study"<<endl;
	}
};
class Part_Std:public Student{
	public:
	void work(){
		cout<<"work"<<endl;
	}
};
int main (){

	Part_Std* p3 = new Part_Std;
	
	p3->sleep();
	p3->study();
	p3->work();
	
	Student* p2 = p3;
	p2->sleep();
	p2->study();
	
	Person* p1 = p2; //주소는 다같음 
	p1->sleep(); 
	cout<<"p1 : "<<p1<<endl<<"p2 : "<<p2<<endl<<"p3 : "<<p3<<endl;
}
