#include<iostream>
#include<cstring>
using namespace std;

class Person{
	char *name;
	char *phone;
	int age;
public:
	Person(char *_name = "", char *_phone = "", int _age = 0); //����Ʈ�����ڴ� ���𹮿� �־���. 
	Person(const Person &p);//��������� 
	~Person();
	void ShowData();
};

Person::Person(char *_name, char *_phone, int _age){ //����Ʈ �����ڸ� ����ȵ�. 
	cout<<"1.������ ȣ�� : ��ü �ּ� "<<this<<endl;//this ��ü�� �ּ� 
	int len = strlen(_name)+1;//����������˷��� ����������� 
	name = new char(len); 
	strcpy(name,_name);
	
	len = strlen(_phone)+1;
	phone = new char(len);
	strcpy(phone,_phone);
	
	age = _age;
}

Person::Person(const Person &p){
	cout<<"3.��������� ȣ�� : ��ü �ּ� "<<this<<endl;//this ��ü�� �ּ� 
	int len = strlen(p.name)+1;//����������˷��� ����������� 
	name = new char(len); 
	strcpy(name,p.name);
	
	len = strlen(p.phone)+1;
	phone = new char(len);
	strcpy(phone,p.phone);
	
	age = p.age;
} 

Person::~Person(){ //new�� �Ҵ���� �͵�  
	cout<<"2.�Ҹ��� ȣ�� ��ü �ּ� "<<this<<endl;
	delete []name;
	delete []phone;	
}

void Person::ShowData(){
	cout<<"name : "<<name<<endl;
	cout<<"phone : "<<phone<<endl;
	cout<<"age : "<<age<<endl;
	
} 

int main(){
	Person p1("kim","010-1111-1111",57);
	p1.ShowData(); 
	cout<<"\n\n";
	Person p2(p1);
	p2.ShowData();
	
}






