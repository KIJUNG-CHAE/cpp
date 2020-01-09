#include<iostream>
#include<cstring>
using namespace std;

class Perment{
	char name[20];
	int sal;
public:
	Perment(const char* _name, const int  _sal);
	char* getName();
	int getPay();
};

Perment::Perment(const char* _name, const int  _sal){
	strcpy(name,_name);
	sal = _sal;
}
char* Perment::getName(){
	return name;
}
int Perment::getPay(){
	return sal;
}

class Department{
	Perment* emplist[100];//객체생성이아니라 주소만만들어짐 
	int index;
public:
	Department():index(0){} //생성 자 
	void AddEmp(Perment* emp){  //100개의 포인터배열에 힙영역 주소값을 넣는다 
		emplist[index]=emp;
		index++;
	}
	void ShowList(){
		for(int i =0; i<index;i++){
			cout<<"name : "<<emplist[i]->getName()<<endl;
			cout<<"salary : "<<emplist[i]->getPay()<<endl;
		}
	}
};

int main(){
	Department dept;
	Perment* emp;
	emp = new Perment("KiM",1000000);
	dept.AddEmp(emp);
	
	dept.AddEmp(new Perment("Lee",1200000));
	
	emp = new Perment("Moon",3000000);
	dept.AddEmp(emp);
	dept.ShowList(); 
	//동적->소멸을안시킴  
}












