#include "permanant.h"
permanant::permanant(const char* _name, const int _sal) :Employee(_name)
{
	salary = _sal;
}

int permanant::GetPay()
{
	return salary;
}
