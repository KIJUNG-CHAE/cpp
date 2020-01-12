#pragma once
#include<iostream>
#include<cstring>
using namespace std;
class permanant
{
	char name[20];
	int salary;
public:
	permanant(const char* _name, const int _sal);
	char* GetName();
	int GetPay();

};

