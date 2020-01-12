#pragma once
#include<iostream>
#include<cstring>
#include"employee.h"
using namespace std;
class permanant:public Employee
{
	int salary;
public:
	permanant(const char* _name, const int _sal):Employee(_name);
	int GetPay();
};

