#include "department.h"
#include "permanant.h"
int main() {
	department dept;
	permanant* emp;
	emp = new permanant("kim", 1000000);
	dept.AddEmp(emp);
	dept.AddEmp(new permanant("Lee", 2000000));
	dept.AddEmp(new permanant("Park", 1500000));

	dept.ShowList();
}