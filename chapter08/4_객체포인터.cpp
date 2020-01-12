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
	Person* p1 = new Person;
	Person* p2 = new Student;
	Person* p3 = new Part_Std;
	
	p1->sleep();
	p2->sleep();
//	p2->study();//person인줄알기때ㅔ문 오류발 생  
	p3->sleep();
//	p3->study(); 부모포인터이면 부모로판단하고 자식인줄모르ㄴ더 
//부모를 통해서 소통할려고 하지만..tobecontinue                        
//	p3->work();
}
