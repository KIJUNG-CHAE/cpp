#include<iostream>
using namespace std;

class AAA{
	int i;
	int j;
public:
//	AAA(){//������ �Լ� 
//		cout<<"1. ������ ȣ��"<<endl;
//		i = 10;
//		j = 20; 
//	}
	void showData(){
		cout<<"i : "<<i<<" j : "<<j<<endl;
	}
};

int main(){
	AAA a;//��ü ���������ÿ� �����ڽ��� 
	      //�����ڰ� ���ٸ� ����Ʈ �����ڰ� �ڵ����� ��������� 
	a.showData(); 
}
