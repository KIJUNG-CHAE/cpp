#include<iostream>
#include<cstring>
using namespace std;

class Person{
	char *name;
	char *phone;
	int age;
public:
	Person(const char *_name = "", const char *_phone = "", int _age = 0); //����Ʈ�����ڴ� ���𹮿� �־���. 
	~Person();
	void ShowData();
};

/////class�Լ� 
Person::Person(const char *_name,const char *_phone, int _age){ //����Ʈ �����ڸ� ����ȵ�. 
	cout<<"1.������ ȣ�� : ��ü �ּ� "<<this<<endl;//this ��ü�� �ּ� 
	int len = strlen(_name)+1;//����������˷��� ����������� 
	name = new char(len); 
	strcpy(name,_name);
	
	len = strlen(_phone)+1;
	phone = new char(len);
	strcpy(phone,_phone);
	
	age = _age;
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

/////main �Լ� 
int main(){
	Person p1("kim","010-1111-1111",57);
	p1.ShowData(); 
	cout<<"\n\n";
	Person p2(p1);
	p2.ShowData();
	
}






