#include<iostream>
using namespace std;

class Count{
	int cnt;
public:
	Count():cnt(5){
	}
	int *GetPtr(){//�ּҸ��ִ��Լ��� ��ĥ���ɼ����شٴ°� const���ָ�ȵ�. 
		return &cnt;
	}
	void Incre(){
		cnt++;
	}
	void ShowData()const{//�Լ��� const�̸� �׾��� �Լ��� const�̿����� ������  
		ShowIntro();//const�� ��ȣ������� ������ �Ҽ��������� ���Ⱑ�� �����ִ�. 
		cout<<cnt<<endl;
	}
	void ShowIntro(){
		cout<<"1. ���� cnt :";
	}
};

int main(){
	Count c1;
	c1.ShowData();
	c1.Incre();
	c1.ShowData()
}
