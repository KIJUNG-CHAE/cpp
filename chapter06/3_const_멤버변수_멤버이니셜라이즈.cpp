//source error
#include<iostream>
#include<cstring>
using namespace std;
class Student{
	const int id;//const int id;
	int age;
	char name[20];
	char major[20];
public:
	Student(int _id, int _age,const char* _name,const char* _major)
	:id(_id),age(_age) //member_initulize
	{
		//id = _id;
		//age = _age;
		strcpy(name,_name);
		strcpy(major,_major);
		
	}
	
void ShowData()const{
	cout<<"1. 이름 : "<<name<<endl;
	//함수가 const이후로 멤버변수값 수정불가능 age++; // 고치려는 코드가 들어가면 안됨 
	cout<<"2. 나이 : "<<age<<endl;
	cout<<"3. 학번  : "<<id<<endl;
	cout<<"4. 학과 : "<<major<<endl;
}


};
int main(){
	Student Kim(201911111,20,"honggildong","computer");//error
	Student Lee(201911111,19,"kimgildong","computer");//error
	Kim.ShowData();
	Lee.ShowData(); 
} 
