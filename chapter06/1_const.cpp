#include<iostream>
using namespace std;

int main(){
	int n1=10,n2=20;
	const int* pN1 = &n1; //���� ���� �� 
	//*pN1=20; error
	pN1=&n2;
	int* const pN2=&n1; //�ּҸ� ���ٲ� 
	*pN2=100;
	//pN2=&n2;
}
