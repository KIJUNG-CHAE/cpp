#include<iostream>
using namespace std;

class AAA{
	int i;
	int j;
public:
//	AAA(){//������ �Լ� 
//		cout<<"1. �Ű������� ���� ������ ȣ��"<<endl;
//		i = 10;
//		j = 20; 
//	}
	AAA(int _i){ //�Լ��� �����ε�  
		cout<<"2. �Ű������� �Ѱ��� ������ ȣ��"<<endl;
		i = _i;
		j = 10; 
	} 
	AAA(int _i, int _j){ //�Լ��� �����ε�  
		cout<<"3. �Ű������� �ΰ��� ������ ȣ��"<<endl;
		i = _i;
		j = _j; 
	}
	void showData(){
		cout<<"i : "<<i<<" j : "<<j<<endl;
	}
};

int main(){
	AAA a;//��ü ���������ÿ� �����ڽ��� 
		  //�����ڰ� ���ٸ� ����Ʈ �����ڰ� �ڵ����� ��������� 
	a.showData(); 
	AAA b(100); //2��°�� ã�ư�
	b.showData();  
	int i,j;
	cout<<"initalize i, j : ";
	cin>>i>>j;
	AAA c(i,j); //3��°�� ã�ư� 
	c.showData();
}
