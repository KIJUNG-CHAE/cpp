#include<iostream>
using namespace std;

class AAA{
	int val1; //��������� �ʱ�ȭ �� �� 
	int val2;
public:
	AAA(int _val1 = 0, int _val2 = 0){
		val1 = _val1;
		val2 = _val2;
	} 
	AAA(const AAA &a){
		cout<<"1. ���� ������ ȣ��"<<endl;
		val1 = a.val1;
		val2 = a.val2;
		}
	void ShowData(){
		cout<<"val1 = "<<val1<<" , val2 = "<<val2<<endl;
		
	}
}; 

int main(){
	AAA a1(10);
	a1.ShowData();
	AAA a2 = 50; //=�� ���ԵǸ� �ϳ��� �ʱ�ȭ ��ų�� �ִ�. ������ �����  
	a2.ShowData();
	AAA a3(50,90);
	a3.ShowData();
	
	cout<<"����Ʈ ���� �����ڸ� �̿��� ��ü�� ����"<<endl;
	
	AAA a4 = a3;
	a4.ShowData(); 
	AAA a5(a4);
	a5.ShowData();
}
