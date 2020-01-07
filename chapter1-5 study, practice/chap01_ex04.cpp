#include<iostream>
using namespace std;

int function(int _money = 0){
	return 500000 + _money*0.12;
} 

int main(){
	int money;
	cout<<"판매금액을 입력 : ";
	cin>>money;
	cout<<"판매원의 급여 : "<<function(money)<<" 원";
}
