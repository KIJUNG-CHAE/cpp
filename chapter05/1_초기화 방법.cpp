#include<iostream>
using namespace std;

class AAA{
	int val1; //��������� �ʱ�ȭ �ȵ� 
	int val2;
public:
	AAA(int _val1 = 0, int _val2 = 0){
		val1 = _val1;
		val2 = _val2;
	} 
	
	void ShowData(){
		cout<<"val1 = "<<val1<<" , val2 = "<<val2<<endl;
		
	}
}; 

int main(){
	AAA a1(10);
	a1.ShowData();
	AAA a2 = 50; //=�� ���ԵǸ� �ϳ��� �ʱ�ȭ ��ų�� �ִ�. 
	a2.ShowData();
	AAA a3(10,20);
	a3.ShowData();
}
