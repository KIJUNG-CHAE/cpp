#include "Temp.h"
Temp::Temp(const char* _name, const int _time, const int _pay) :Employee(_name) {
	time = _time;
	pay = _pay;
}
int Temp::GetPay() {
	return time * pay;
}