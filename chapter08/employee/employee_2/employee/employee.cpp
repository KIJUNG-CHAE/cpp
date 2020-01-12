#include "employee.h"
Employee::Employee(const char* _name) {
	strcpy_s(name, _name);
}
const char* Employee::GetName() { //바꾸는상황 제외시키기윈해const 사용
	return name;
}
