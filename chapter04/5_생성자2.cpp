#include<iostream>
using namespace std;

class AAA{
	int i;
	int j;
public:
//	AAA(){//일종의 함수 
//		cout<<"1. 매개변수가 없는 생성자 호출"<<endl;
//		i = 10;
//		j = 20; 
//	}
	AAA(int _i){ //함수의 오버로딩  
		cout<<"2. 매개변수가 한개인 생성자 호출"<<endl;
		i = _i;
		j = 10; 
	} 
	AAA(int _i, int _j){ //함수의 오버로딩  
		cout<<"3. 매개변수가 두개인 생성자 호출"<<endl;
		i = _i;
		j = _j; 
	}
	void showData(){
		cout<<"i : "<<i<<" j : "<<j<<endl;
	}
};

int main(){
	AAA a;//객체 생성과동시에 생성자실행 
		  //생성자가 없다면 디폴트 생성자가 자동으로 만들어진다 
	a.showData(); 
	AAA b(100); //2번째를 찾아감
	b.showData();  
	int i,j;
	cout<<"initalize i, j : ";
	cin>>i>>j;
	AAA c(i,j); //3번째를 찾아감 
	c.showData();
}
