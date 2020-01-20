#include<iostream>
#include<cstring>
using namespace std;

class Person{
	char* name;
public:
	Person(const char* _name = ""){
		name = new char[strlen(_name)+1];
		strcpy(name,_name);
	}
	~Person(){
		delete []name;//delete name[]; 
	}
	Person& operator=(Person& a){
		delete []name;
		name = new char[strlen(a.name)+1];
		strcpy(name,a.name);
		return *this;
	}
	friend ostream& operator<<(ostream& os,const Person& a);//ostream 앞에const를 붙이면 안된다. 리턴할때 os는 변경되기 때문. 
}; 
ostream& operator<<(ostream& os,const Person& a){
	os<<"name : "<<a.name<<endl;
	return os;
}



int main(){
	Person p1("kim");//0x100
	Person p2("choi");//0x200
	cout<<"p1 : "<<p1<<endl;
	cout<<"p2 : "<<p2<<endl;
	p1 = p2;//주소를복 사  
	cout<<"p1 = p2 후 p1 : "<<p1<<endl;//p1도 주소복사 0x200 주소를 잃어버림 따라서 대입연산자를 만들어 줘야한다. 
}
