#include<iostream>
using namespace std;

const int OPEN = 1;//변수와 차별을 둘때 대문자를 많이 사용함. 
const int CLOSE = 2;

class Door{
	int state;//멤버 변수 
public: 
	void Open(){
		state = OPEN;
	}
	void Close(){
		state = CLOSE;
	}
	void showState(){
		if(state == OPEN) cout<<" 문이 열렸다"<<endl;
		else cout<<" 문이 닫혔다"<<endl; 
	}
	void showState1(){
		cout<<((state == OPEN)?" 문이 열렸다":" 문이 닫혔다")<<endl;	
	}
};

int main(){
	Door d;
	// d.state = OPEN;//에러발생  
	d.Open();
	d.showState();
	d.Close();
	d.showState1();
}
