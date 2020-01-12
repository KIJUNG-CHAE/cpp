//#include "department.h"
//
//department::department() :index(0) {}
//
//void department::AddEmp(permanant* emp) {
//	emplist[index] = emp;
//	index++;
//}
//void department::ShowList() {
//	for (int i = 0; i < index; i++) {
//		cout << "name : " << emplist[i]->GetName() << endl;
//		cout << "salary : " << emplist[i]->GetPay() << endl;
//	}
//}
#include "department.h"

department::department() :index(0) {}

void department::AddEmp(permanant* emp) {
   emplist[index] = emp;
   index++;
}
void department::ShowList() {
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
