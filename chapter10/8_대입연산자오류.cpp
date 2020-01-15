#include <iostream>
#include<cstring>
using namespace std;

class Person{
	char* str;
public:
	Person(const char* _str = ""){
		str = new char[strlen(_str)+1];
		strcpy(str,_str);
	}
	Person(const Person& p){
		str = new char[strlen(p.str)+1];
		strcpy(str,p.str);
	}
	~Person(){
		delete []str;//str이 그주소를찾아가면 연속적으로 있다 ,뜨문뜨문 배열기호사 용  
	}
	Person& operator=(const Person& p){
		delete []str; //문자열길이가다르므로 원래 메모리공간을 없애고 새로 할당 해줘야함. 
		str = new char[strlen(p.str)+1];
		strcpy(str,p.str);
		return *this; 
	}
	friend ostream& operator<<(ostream& os, const Person& p);//&계속받겠다는의미 
};

ostream& operator<<(ostream& os, const Person& p){
	os << "str:"<<p.str<<endl;
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
