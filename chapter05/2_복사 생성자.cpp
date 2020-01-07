#include<iostream>
using namespace std;

class AAA{
	int val1; //멤버변수는 초기화 안 됨 
	int val2;
public:
	AAA(int _val1 = 0, int _val2 = 0){
		val1 = _val1;
		val2 = _val2;
	} 
	AAA(const AAA &a){
		cout<<"1. 복사 생성자 호출"<<endl;
		val1 = a.val1;
		val2 = a.val2;
		}
	void ShowData(){
		cout<<"val1 = "<<val1<<" , val2 = "<<val2<<endl;
		
	}
}; 

int main(){
	AAA a1(10);
	a1.ShowData();
	AAA a2 = 50; //=을 쓰게되면 하나만 초기화 시킬수 있다. 여러개 쓸경우  
	a2.ShowData();
	AAA a3(50,90);
	a3.ShowData();
	
	cout<<"디폴트 복사 생성자를 이용한 객체의 복사"<<endl;
	
	AAA a4 = a3;
	a4.ShowData(); 
	AAA a5(a4);
	a5.ShowData();
}
