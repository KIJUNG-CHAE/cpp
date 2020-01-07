#include<iostream>
#include <string.h>
#define SIZE 20

using namespace std;

class Person{
	char name[SIZE];
	char phone[SIZE];
	int age;
public:
	Person(const char* _name = "",const char* _phone = "", int _age = 0){
		
		strcpy(name,_name);//		name=_name;
		strcpy(phone,_phone);//      phone=_phone;
		age=_age;
		cout<<this<<endl;
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
	char name1[20];
	char phone1[20];
	int age1; 
	char name2[20];
	char phone2[20];
	int age2; 
	char name3[20];
	char phone3[20];
	int age3; 
	cout<<"name : ";
	cin>>name1;
	cout<<"phone : ";
	cin>>phone1;
	cout<<"age : ";
	cin>>age1;
	
	Person p;
	p = Person(name1,phone1,age1);


	
	cout<<"name : ";
	cin>>name2;
	cout<<"phone : ";
	cin>>phone2;
	cout<<"age : ";
	cin>>age2;
	
	cout<<"name : ";
	cin>>name3;
	cout<<"phone : ";
	cin>>phone3;
	cout<<"age : ";
	cin>>age3;
	
	Person* arr[2];
	arr[1] = new Person(name2,phone2,age2);
	cout<<arr[1]<<endl;
	arr[2] = new Person(name3,phone3,age3);
	cout<<arr[2]<<endl;

	
	
	delete arr[1];
	delete arr[2];
	
	
	
	
	
//	Person p; 
//	p.showData();
//
//	Person q = Person("Honggildong","010-5555-5555",22);
//	q.showData();
}









