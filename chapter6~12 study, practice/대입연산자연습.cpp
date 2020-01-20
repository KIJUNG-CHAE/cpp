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
	friend ostream& operator<<(ostream& os,const Person& a);//ostream �տ�const�� ���̸� �ȵȴ�. �����Ҷ� os�� ����Ǳ� ����. 
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
	p1 = p2;//�ּҸ��� ��  
	cout<<"p1 = p2 �� p1 : "<<p1<<endl;//p1�� �ּҺ��� 0x200 �ּҸ� �Ҿ���� ���� ���Կ����ڸ� ����� ����Ѵ�. 
}
