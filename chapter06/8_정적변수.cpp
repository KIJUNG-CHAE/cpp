#include<iostream>
#include<cstring>
using namespace std;


class Person{
	char name[20];
	int age;
	static int count;//Ŭ������ �����ν� ��������ȿ� ������������
					//���������� �ʱ�ȭ ��Ű������ ������ �� 
public:
	Person(const char* _name,const int _age){
		strcpy(name, _name);
		age=_age;
		cout<<count++<<"��° Person��ü ���� "<<endl;
	}
	void ShowData(){
		cout<<"name : "<<name<<" , "<<"age : "<<age<<endl<<endl;
	}
}; 

int Person::count = 1;//���������� �ʱ�ȭ 
int main(){
	Person p1("Lee",13);
	Person p2("Kim",22);
}
