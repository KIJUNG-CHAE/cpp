#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

class Employee{
	char* name;
public:
	Employee(const char* _name){
		name = new char[strlen(_name)+1];
		strcpy(name,_name);
	}
	virtual ~Employee(){
		delete []name;
	}
	char* getName(){
		return name;
	}
	virtual void ShowData() = 0;
};

class Permanent: public Employee{
	int salary;
public:
	Permanent(const char* _name ,int _salary):Employee(_name){
		salary = _salary;
	}
	int getSalary(){
		return salary;
	}
	void ShowData(){
		cout.width(20);
		cout<<getName();
		cout.width(20);
		cout<<getSalary();
		cout.width(40);
	}
};

class SalesMan:public Permanent{
	
	int sale;
	int commission;
public:
	SalesMan(const char* _name ,int _salary, int _sale, int _commission):Permanent(_name,_salary){
		sale = _sale;
		commission = _commission;
	}
	int getSale(){
		return sale;
	}
	int getCommission(){
		return commission;
	}
	void ShowData(){
		cout.width(20);
		cout<<getName();
		cout.width(20);
		cout<<getSalary();
		cout.width(20);
		cout<<getSale();
		cout.width(20);
		cout<<getCommission();
	}
};

class Temporary:public Employee{
	int work;
	int time;
public:
	Temporary(const char* _name, int _work, int _time ):Employee(_name){
		work = _work;
		time = _time;
	}
	int getSalary(){
		return work*time;
	}
	int getWork(){
		return work;
	}
	int getTime(){
		return time;
	}
	void ShowData(){
		cout.width(20);
		cout<<getName();
		cout.width(20);
		cout<<getSalary();
		cout.width(20);
		cout<<getWork();
		cout.width(20);
		cout<<getTime();
	}
};

class Department{
	Employee* emplist[100];
	static int index;
public:
	Department(){}
	~Department(){
		for(int i = 0;i<100;i++){
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
		for(int i = 0; i<index;i++){
			emplist[i]->ShowData();
			cout<<endl;
		}
	}
};
int Department::index = 0;
int main(){
	//직원을 관리하는 CONTROL클래스
	Department department;
	Employee* emp;
	//직원등록
	department.AddEmployee(new Permanent("KIM",1000000));
	department.AddEmployee(new Permanent("LEE",1500000));
	department.AddEmployee(new Permanent("JUN",2000000));
	
	emp = new Temporary("Jang",30,8000);
	department.AddEmployee(emp);
	department.AddEmployee(new Temporary("Han",20,8500));
	department.AddEmployee(new SalesMan("Han",1000000,10000000,0.01));
	//최종적으로 이번달에 지불해야할 급여는?
	department.ShowList();
	return 0; 
}
