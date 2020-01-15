#include<iostream>
#include<cstring>
using namespace std;

class permanant{
	char name[20];
	int salary;
public:
	permanant(const char* _name, const int _sal){
		strcpy(name, _name);
		salary = _sal;
	}
	char* GetName(){
		return name;
	}
	int GetPay(){
		return salary;
	}
};

class department{
	permanant* emplist[100];
	int index;
public:
	department() :index(0) {}
	void AddEmp(permanant* emp){
    	emplist[index] = emp;
   		index++;
	}
	void ShowList(){
    	cout.width(15);
    	cout << "name";
   		cout.width(15);
    	cout << "salary" << endl;
    	for (int i = 0; i < index; i++) {
       		cout.width(15);
       		cout << emplist[i]->GetName();
       		cout.width(15);
     		cout << emplist[i]->GetPay() << endl;
    	}
	}
};

class Employee{
	char name[20];
public:
	Employee(const char* _name){
		strcpy(name, _name);
	}
	const char* GetName(){ //바꾸는상황 제외시키기윈해const 사용
		return name;
	}
};

class Temp:public Employee{
	int time;
	int pay;
public:
	Temp(const char* _name, const int _time, const int _pay) :Employee(_name) {
		time = _time;
		pay = _pay;
	}
	int GetPay(){ //바꾸는상황 제외시키기윈해const 사용
		return pay;
	}
};

int main() {
	department dept;
	permanant* emp;
	emp = new permanant("kim", 1000000);
	dept.AddEmp(emp);
	dept.AddEmp(new permanant("Lee", 2000000));
	dept.AddEmp(new permanant("Park", 1500000));

	dept.ShowList();
}
