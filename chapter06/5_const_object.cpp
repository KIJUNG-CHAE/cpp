#include<iostream>
using namespace std;

class Count{
	int cnt;
public:
	Count():cnt(5){
	}
	void Incre(){
		cnt++;
	}
	//�Լ����� ������const�� ���� �Լ��� �ϳ��� ����� �����. 
	void ShowData()const{//�Լ��� const�̸� �׾��� �Լ��� const�̿����� ������  
		cout<<"1.ShowData() const ȣ�� : "<<endl;
		cout<<cnt<<endl;
	}
	void ShowData(){//�Լ��� const�̸� �׾��� �Լ��� const�̿����� ������  
		cout<<"1.ShowData() ȣ�� : "<<endl;
		cout<<cnt<<endl;
	}
};

int main(){
	const Count c1;
	c1.ShowData();
	//c1.Incre();
	
	Count c2;
	c2.Incre();
	c2.ShowData();
}
