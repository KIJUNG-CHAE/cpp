#include<iostream>
using namespace std;

class AAA{
	int i;
	int j;
public:
	AAA(int _i =0 , int _j = 0){ //�Լ��� �����ε� //����Ʈ �Ű��������. 
		cout<<"3. �Ű������� �ΰ��� ������ ȣ��"<<endl;
		i = _i;
		j = _j; 
	}
	void showData(){
		cout<<"i : "<<i<<" j : "<<j<<endl;
	}
};
//����Ʈ �����ڴ� �����ڸ� �ϳ��� ������ �ʾ����� ���������.
// >> �Ű������� ���� ���� �����ڸ� ����:����Ʈ �Ű��������.
//�����ڰ���� ��ü�� ���������. 
int main(){
	AAA a;//��ü ���������ÿ� �����ڽ��� //�����ڰ� ���ٸ� ����Ʈ �����ڰ� �ڵ����� ��������� 
	a.showData(); 
	AAA b(100); //2��°�� ã�ư�
	b.showData();  
	int i,j;
	cout<<"initalize i, j : ";
	cin>>i>>j;
	AAA c(i,j); //3��°�� ã�ư� 
	c.showData();
}
