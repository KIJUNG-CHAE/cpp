#include<iostream>
#include<cstring>
using namespace std;

class Person{
	char *name;
	char *phone;
	int age;
public:
	Person(const char *_name = "", const char *_phone = "", int _age = 0); //디폴트생성자는 선언문에 넣어줌. 
	~Person();
	void ShowData();
};

/////class함수 
Person::Person(const char *_name,const char *_phone, int _age){ //디폴트 생성자를 쓰면안됨. 
	cout<<"1.생성자 호출 : 객체 주소 "<<this<<endl;//this 객체의 주소 
	int len = strlen(_name)+1;//몇글자인지알려줘 힙영역만들기 
	name = new char(len); 
	strcpy(name,_name);
	
	len = strlen(_phone)+1;
	phone = new char(len);
	strcpy(phone,_phone);
	
	age = _age;
}
Person::~Person(){ //new로 할당받은 것들  
	cout<<"2.소멸자 호출 객체 주소 "<<this<<endl;
	delete []name;
	delete []phone;	
}

void Person::ShowData(){
	cout<<"name : "<<name<<endl;
	cout<<"phone : "<<phone<<endl;
	cout<<"age : "<<age<<endl;
	
} 

/////main 함수 
int main(){
	Person p1("kim","010-1111-1111",57);
	p1.ShowData(); 
	cout<<"\n\n";
	Person p2(p1);
	p2.ShowData();
	
}






