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
//	p2->study();//person���پ˱⶧�Ĺ� ������ ��  
	p3->sleep();
//	p3->study(); �θ��������̸� �θ���Ǵ��ϰ� �ڽ����ٸ𸣤��� 
//�θ� ���ؼ� �����ҷ��� ������..tobecontinue                        
//	p3->work();
}
