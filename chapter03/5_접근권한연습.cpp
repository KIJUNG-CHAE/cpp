#include<iostream>

using namespace std;

class Counter
{
	int val;//private
public:   //public ����Լ��� ���������� ������ ���� �� �������� 
	void Incre(){
		val++;
	}
	void setVal(int a){
		val = a;
	}
	int getVal(){//��纯������ ����°� ��Ģ��  
		return val;
	}
	void showVal(){
		cout<<"Val : "<<val<<endl;
	}
};

int main(){
	Counter cnt;
	//cnt.val = 5;//�����߻� private�̱⶧�� 
	cnt.showVal();
	cnt.setVal(5);
	cout<<"Val : "<<cnt.getVal()<<endl;
}
