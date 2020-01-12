#pragma once
#include<iostream>
#include<cstring>
#include"permanant.h"

using namespace std;
class department
{
	Employee* emplist[100];
	int index;
public:
	department();
	void AddEmp(Employee* emp);
	void ShowList();
};