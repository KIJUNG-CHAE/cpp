#include<iostream>
#include <string.h>
#define SIZE 20

using namespace std;

class Person{
	char name[SIZE];
	char phone[SIZE];
	int age;
public:
	Person(char* _name = "", char* _phone = "", int _age = 0){  //�� warning�ߴ��� �𸣰���. 
		strcpy(name,_name);//		name=_name;
		strcpy(phone,_phone);//      phone=_phone;
		age=_age;
	}
	~Person(){ //����Ʈ �Ҹ��ڸ� Ȯ���� ���ִ�. 
		cout<<"2. �Ҹ��� ȣ��"<<endl;
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
	Person p; //error p();�Լ��� ���ϰ��� �ǹ���. 
	//�Լ��� ��ȯ���� Person�� �Լ� p() 
	//p.setData("Chaekijung","010-1111-1111",22)
	p.showData();
	//Person q("CHAE kijung","010-5555-5555",22);
	Person q = Person("CHAE kijung","010-5555-5555",22);
	q.showData();
}
