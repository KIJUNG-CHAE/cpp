#pragma once
#include<iostream>
using namespace std;

class AAA
{
	int val;
public:
	AAA() {
		cout << "AAA()생성자 호출 , 주소 : " << this << endl;
		val = 0;
	}
	AAA(int i) {
		cout << "AAA(int i)생성자 호출 , 주소 : " << this << endl;
		val = i;
	}
	AAA(const AAA &a) {
		cout << "AAA(const AAA &a)복사생성자 호출 , 주소 : " << this << endl;
		val = a.val;
	}
	~AAA() {
		cout << "AAA 소멸자 호출 , 주소 : " << this << endl;
	}
	void ShowData() {
		cout << "val : " << val << endl;
	}
	AAA* GetThis() {
		return this;
	}
		//나의 주소를 확인하는 함수 객체의 주소반환
};

void fct(AAA a) {
	a.ShowData();
}
AAA function() {
	cout << "function 안" << endl;
	AAA a(50);
	a.ShowData();
	cout << "return 전" << endl;
	return a;
}

