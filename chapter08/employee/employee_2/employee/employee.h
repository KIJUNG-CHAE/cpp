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
	virtual int GetPay() = 0;// 순수 가상함수 코드를 만들지 않겠다.
};

