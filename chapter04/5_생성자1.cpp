#include<iostream>
using namespace std;

class AAA{
	int i;
	int j;
public:
//	AAA(){//일종의 함수 
//		cout<<"1. 생성자 호출"<<endl;
//		i = 10;
//		j = 20; 
//	}
	void showData(){
		cout<<"i : "<<i<<" j : "<<j<<endl;
	}
};

int main(){
	AAA a;//객체 생성과동시에 생성자실행 
	      //생성자가 없다면 디폴트 생성자가 자동으로 만들어진다 
	a.showData(); 
}
