#include "department.h"

department::department() :index(0) {}

void department::AddEmp(Employee* emp) {
	emplist[index] = emp;
	index++;
}
void department::ShowList() {
	cout.width(15);
	cout << "�̸�";
	cout.width(15);
	cout << "�޿�";
	for (int i = 0; i < index; i++) {
		cout.width(15);
		cout << "name : " << emplist[i]->GetName() << endl;
		cout.width(15);
		cout << "salary : " << emplist[i]->GetPay() << endl;
	}
}
