#include "department.h"

department::department() :index(0) {}

void department::AddEmp(permanant* emp) {
	emplist[index] = emp;
	index++;
}
void department::ShowList() {
	for (int i = 0; i < index; i++) {
		cout << "name : " << emplist[i]->GetName() << endl;
		cout << "salary : " << emplist[i]->GetPay() << endl;
	}
}
