#include "permanant.h"
permanant::permanant(const char* _name, const int _sal)
{
	strcpy_s(name, _name);
	salary = _sal;
}
char* permanant::GetName()
{
	return name;
}
int permanant::GetPay()
{
	return salary;
}
