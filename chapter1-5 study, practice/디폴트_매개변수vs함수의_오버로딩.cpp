#include<iostream>
using namespace std;

int function(int a =10){
	return a+1;
}

int function(void){
	return 10;
}

int main(void)
{
	cout<<function(10)<<endl;
	cout<<function()<<endl;
	return 0;
}

//함수의 오버로드가 모호함. 
