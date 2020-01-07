#include<iostream>
#include <string.h>
#define SIZE 20

using namespace std;

class Person{
	char name[SIZE];
	char phone[SIZE];
	int age;
public:
	Person(char* _name = "", char* _phone = "", int _age = 0){  //왜 warning뜨는지 모르겠음. 
		strcpy(name,_name);//		name=_name;
		strcpy(phone,_phone);//      phone=_phone;
		age=_age;
	}
	~Person(){ //디폴트 소멸자를 확인할 수있다. 
		cout<<"2. 소멸자 호출"<<endl;
	}
	void setData(char* _name ,char* _phone ,int _age){
		strcpy(name,_name);//		name=_name;
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
