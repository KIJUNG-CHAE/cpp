#pragma once

#include<iostream>
#include<cstring>
#include"permanant.h"
using namespace std;
class department
{
	permanant* emplist[100];
	int index;
public:
	department();
	void AddEmp(permanant* emp);
	void ShowList();
};