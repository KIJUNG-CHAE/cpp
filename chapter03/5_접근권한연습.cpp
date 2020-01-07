#include<iostream>

using namespace std;

class Counter
{
	int val;//private
public:   //public 멤버함수로 간접적으로 변수를 수정 이 보통적임 
	void Incre(){
		val++;
	}
	void setVal(int a){
		val = a;
	}
	int getVal(){//모든변수마다 만드는게 원칙임  
		return val;
	}
	void showVal(){
		cout<<"Val : "<<val<<endl;
	}
};

int main(){
	Counter cnt;
	//cnt.val = 5;//에러발생 private이기때문 
	cnt.showVal();
	cnt.setVal(5);
	cout<<"Val : "<<cnt.getVal()<<endl;
}
