#include<iostream>
#include<cstring>
#include<iomanip>//
using namespace std;

class Employee{
	char* name;
public:
	Employee(const char* _name ){
		name = new char[strlen(_name)+1];
		strcpy(name,_name);
	}
	virtual ~Employee(){
		delete []name;
	}
	char* getName(){
		return name;
	}
	virtual void EachShow() = 0;
};

class Department{
	Employee* emplist[100];
	static int index;
public:
	~Department(){
		for(int i = 0; i<100;i++){//int =0;~~~~ i<100
			cout<<"Delete Object"<<endl;
			delete emplist[i];
		}
	}
	void AddEmployee(Employee* emp){
		emplist[index] = emp;
		
		index++;
	}
	void ShowList(){
		cout<<setiosflags(ios::left);
		cout.width(20);
		cout<<"name";
		cout.width(20);
		cout<<"salary";
		cout.width(20);
		cout<<"sales money";
		cout.width(20);
		cout<<"commission"<<endl;
		cout.width(40);
		cout<<" ";
		cout.width(20);
		cout<<"work time";
		cout.width(20);
		cout<<"pay per time"<<endl;
		for(int i  = 0;i<index;i++){
			emplist[i]->EachShow();
		}
	}
};

int Department::index = 0;

class Permanent:public Employee{//class Permanent:class Employee{
	int salary;
public:
	Permanent(const char* _name , int _salary ):Employee(_name){
		salary = _salary;
	}
	int getSalary(){
		return salary;//Salary
	}
	void EachShow(){
		cout.width(20);
		cout<<getName();
		cout.width(20);
		cout<<getSalary()<<endl;
	}
};

class Temporary:public Employee{
	int workTime;
	int payPerTime;
public:
	Temporary(const char* _name, int _workTime, int _payPerTime):Employee(_name){
		workTime = _workTime;
		payPerTime = _payPerTime;
	}
	int getWorkTime(){
		return workTime;
	}
	int getPayPerTime(){
		return payPerTime;
	}
	int getSalary(){
		return workTime*payPerTime;
	}
	void EachShow(){
		cout.width(20);
		cout<<getName();
		cout.width(20);
		cout<<getSalary();
		cout.width(20);
		cout<<getWorkTime();
		cout.width(20);
		cout<<getPayPerTime()<<endl;
	}
};

class SalesMan:public Permanent{//class SalesMan:public Temporary{ // 문제를 잘보자  
	int salesMoney;
	double commission;//int commission;
public:
	SalesMan(const char* _name, int _salary, int _salesMoney, double _commission)
	:Permanent(_name,_salary){
		salesMoney = _salesMoney;
		commission = _commission;
	}
	int getSalesMoney(){
		return salesMoney;
	}
	double getCommission(){
		return commission;
	}
	void EachShow(){
		cout.width(20);
		cout<<getName();
		cout.width(20);
		cout<<getSalary();
		cout.width(20);
		cout<<getSalesMoney();
		cout.width(20);
		cout<<getCommission()<<endl;
	}
};



int main(){
	//직원을 관리하는 CONTROL클래스 
	Department department;
	Employee* emp;
	//직원등록 
	department.AddEmployee(new Permanent("KIM",1000000));
	department.AddEmployee(new Permanent("LEE",1500000));
	department.AddEmployee(new Permanent("JUN",2000000));
	
	emp = new Temporary("Jang", 30, 8000);
	department.AddEmployee(emp);
	department.AddEmployee(new Temporary("Han",20,8500));
	department.AddEmployee(new SalesMan("Han",1000000,10000000, 0.01));
	//최종적으로 이번달에 지불해야할 급여는?
	department.ShowList();
	return 0;	 
}
