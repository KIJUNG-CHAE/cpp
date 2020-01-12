#pragma once
#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
	char name[20];
public:
	Employee(const char* _name);
	const char* GetName();
};

