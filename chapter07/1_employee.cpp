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
	Perment* emplist[100];//��ü�����̾ƴ϶� �ּҸ�������� 
	int index;
public:
	Department():index(0){} //���� �� 
	void AddEmp(Perment* emp){  //100���� �����͹迭�� ������ �ּҰ��� �ִ´� 
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
	//����->�Ҹ����Ƚ�Ŵ  
}












