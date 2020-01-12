#include "department.h"
#include "permanant.h"
#include "Temp.h"
#include "employee.h"
int main() {
	department dept;
	Employee* emp;
	emp = new permanant("kim", 1000000);
	dept.AddEmp(emp);
	dept.AddEmp(new permanant("Lee", 2000000));
	dept.AddEmp(new permanant("Park", 1500000));
	emp = new Temp("chae", "10", 8300);
	dept.AddEmp(emp);
	dept.AddEmp(new Temp("hong", "12", 9000);)

	dept.ShowList();
}