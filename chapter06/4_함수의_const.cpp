#include<iostream>
using namespace std;

class Count{
	int cnt;
public:
	Count():cnt(5){
	}
	int *GetPtr(){//주소를주는함수는 고칠가능성을준다는것 const를주면안됨. 
		return &cnt;
	}
	void Incre(){
		cnt++;
	}
	void ShowData()const{//함수가 const이면 그안의 함수도 const이여야함 외형을  
		ShowIntro();//const는 보호기능으로 역할을 할수도있지만 족쇄가될 수도있다. 
		cout<<cnt<<endl;
	}
	void ShowIntro(){
		cout<<"1. 현재 cnt :";
	}
};

int main(){
	Count c1;
	c1.ShowData();
	c1.Incre();
	c1.ShowData()
}
