#pragma once
#include<iostream>
using namespace std;

class AAA
{
	int val;
public:
	AAA() {
		cout << "AAA()������ ȣ�� , �ּ� : " << this << endl;
		val = 0;
	}
	AAA(int i) {
		cout << "AAA(int i)������ ȣ�� , �ּ� : " << this << endl;
		val = i;
	}
	AAA(const AAA &a) {
		cout << "AAA(const AAA &a)��������� ȣ�� , �ּ� : " << this << endl;
		val = a.val;
	}
	~AAA() {
		cout << "AAA �Ҹ��� ȣ�� , �ּ� : " << this << endl;
	}
	void ShowData() {
		cout << "val : " << val << endl;
	}
	AAA* GetThis() {
		return this;
	}
		//���� �ּҸ� Ȯ���ϴ� �Լ� ��ü�� �ּҹ�ȯ
};

void fct(AAA a) {
	a.ShowData();
}
AAA function() {
	cout << "function ��" << endl;
	AAA a(50);
	a.ShowData();
	cout << "return ��" << endl;
	return a;
}

