#include<iostream>
using namespace std;

int function(int _money = 0){
	return 500000 + _money*0.12;
} 

int main(){
	int money;
	cout<<"�Ǹűݾ��� �Է� : ";
	cin>>money;
	cout<<"�Ǹſ��� �޿� : "<<function(money)<<" ��";
}
