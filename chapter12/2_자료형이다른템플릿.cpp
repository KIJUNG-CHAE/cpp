#include<iostream>
#include<cstring>
using namespace std;

template<typename T1,typename T2>
void ShowData(T1 a, T2 b){ //�Լ� ���� ��  
	cout<<a<<endl;
	cout<<b<<endl;
}

int main(){
	ShowData(1,5);
	ShowData(1,5.5);
	
} 
