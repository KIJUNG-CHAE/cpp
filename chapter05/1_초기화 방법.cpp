#include<iostream>
using namespace std;

class AAA{
	int val1; //멤버변수는 초기화 안됨 
	int val2;
public:
	AAA(int _val1 = 0, int _val2 = 0){
		val1 = _val1;
		val2 = _val2;
	} 
	
	void ShowData(){
		cout<<"val1 = "<<val1<<" , val2 = "<<val2<<endl;
		
	}
}; 

int main(){
	AAA a1(10);
	a1.ShowData();
	AAA a2 = 50; //=을 쓰게되면 하나만 초기화 시킬수 있다. 
	a2.ShowData();
	AAA a3(10,20);
	a3.ShowData();
}
