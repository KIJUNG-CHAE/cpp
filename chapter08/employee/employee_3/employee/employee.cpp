#include "employee.h"
Employee::Employee(const char* _name) {
	strcpy_s(name, _name);
}
const char* Employee::GetName() { //�ٲٴ»�Ȳ ���ܽ�Ű������const ���
	return name;
}
