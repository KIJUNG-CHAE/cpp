#include<iostream>
#include<cstring>
using namespace std;

class Person{
	public:
		Person * GetThis(){ //객체의 주소를 찾는것  
			return this;
		}
};
//person에는 주소를 할당받은것이 없기때문에 소멸자를 쓸필요가없다. 
int main(){
	Person p1;
	cout<<"p1의 주소 : "<<&p1<<endl;
	cout<<"p1.getThis"<<p1.GetThis()<<endl;
	
	Person *p2 = new Person();
	cout<<"p2의 주소 : "<<p2<<endl; //p2자체가 주소임  
	cout<<"p2->getThis"<<p2->GetThis()<<endl;
	
	delete p2; // 소멸자는 멤버변수의 포인터가 있을때  
}

//소멸자, 포인터다시공부 
