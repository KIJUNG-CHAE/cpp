#include<iostream>
#include <string.h>
#define SIZE 20

using namespace std;

class Person{
	char* name;
	char* phone;
	int age;
public:
	Person(const char* _name = "",const char* _phone = "",const int _age = 0){  //�� warning�ߴ��� �𸣰���.���޵Ǵº����� �ٲ��ȵǱ⶧����const����ؾ��� ����c 
		cout<<"������ ȣ��"<<endl;
		name = new char[strlen(_name)+1];
		strcpy(name,_name);//		name=_name;
		phone = new char[strlen(_phone)+1];
		strcpy(phone,_phone);//      phone=_phone;
		age=_age;
	}
	~Person(){ //����Ʈ �Ҹ��ڸ� Ȯ���� ���ִ�. 
		cout<<"2. �Ҹ��� ȣ��"<<endl;
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
	Person p; //error p();�Լ��� ���ϰ��� �ǹ���. 
	//�Լ��� ��ȯ���� Person�� �Լ� p() 
	//p.setData("Chaekijung","010-1111-1111",22)
	p.showData();
	//Person q("CHAE kijung","010-5555-5555",22);
	Person q = Person("CHAE kijung","010-5555-5555",22);
	q.showData();
}
