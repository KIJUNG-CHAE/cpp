#pragma once
#include<iostream>
#include<cstring>
#include "employee.h"
using namespace std;

class Temp:public Employee
{
	int time;
	int pay;
public:
	Temp(const char* _name, const int _time, const int _pay);
	int GetPay();
};

