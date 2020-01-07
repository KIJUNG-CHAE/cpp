#include<iostream>
using namespace std;

class Count{
	int cnt;
public:
	Count():cnt(5){
	}
	void Incre(){
		cnt++;
	}
	//함수명은 같지만const를 붙은 함수를 하나더 만들어 줘야함. 
	void ShowData()const{//함수가 const이면 그안의 함수도 const이여야함 외형을  
		cout<<"1.ShowData() const 호출 : "<<endl;
		cout<<cnt<<endl;
	}
	void ShowData(){//함수가 const이면 그안의 함수도 const이여야함 외형을  
		cout<<"1.ShowData() 호출 : "<<endl;
		cout<<cnt<<endl;
	}
};

int main(){
	const Count c1;
	c1.ShowData();
	//c1.Incre();
	
	Count c2;
	c2.Incre();
	c2.ShowData();
}
