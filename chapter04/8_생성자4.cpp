#include<iostream>
#include <string.h>
#define SIZE 20

using namespace std;

class Person{
	char* name;
	char* phone;
	int age;
public:
	Person(const char* _name = "",const char* _phone = "",const int _age = 0){  //왜 warning뜨는지 모르겠음.전달되는변수가 바뀌면안되기때문에const사용해야함 데브c 
		cout<<"생성자 호출"<<endl;
		name = new char[strlen(_name)+1];
		strcpy(name,_name);//		name=_name;
		phone = new char[strlen(_phone)+1];
		strcpy(phone,_phone);//      phone=_phone;
		age=_age;
	}
	~Person(){ //디폴트 소멸자를 확인할 수있다. 
		cout<<"2. 소멸자 호출"<<endl;
		delete []name;
		delete []phone;
	}
	void setData(char* _name ,char* _phone ,int _age){
		name = new char[strlen(_name)+1];
		strcpy(name,_name);//		name=_name;
		phone = new char[strlen(_phone)+1];
		strcpy(phone,_phone);//      phone=_phone;
		age=_age;
	}
	void showData(){
		cout<<"name : "<<name<<endl;
		cout<<"phone : "<<phone<<endl;
		cout<<"age : "<<age<<endl;
	}
}; 

int main(){
	Person p; //error p();함수의 리턴값을 의미함. 
	//함수의 반환값이 Person인 함수 p() 
	//p.setData("Chaekijung","010-1111-1111",22)
	p.showData();
	//Person q("CHAE kijung","010-5555-5555",22);
	Person q = Person("CHAE kijung","010-5555-5555",22);
	q.showData();
}
