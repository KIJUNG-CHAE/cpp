#include<iostream>
using namespace std;

class Cudgel{//�θ�Ŭ�� �� 
public:
	Cudgel(){
		cout<<"Cudgel()ȣ�� : "<<this<<endl;	
	}
	~Cudgel(){
		cout<<"~Cudgel()ȣ�� : "<<this<<endl;		
	}
	void Swing(){
		cout<<"Swing a cudgel"<<endl;
	}
}; 

class Police{
	Cudgel cud;//��������� �ٸ���ü�� �������̾��Ťſ쵵 ����� ������ ��  
public:
	Police(){
		cout<<"Police()ȣ�� : "<<this<<endl;	
	}
	~Police(){
		cout<<"~Police()ȣ�� : "<<this<<endl;		
	}
	void UseWeapon(){
		cud.Swing();//�θ�Ŭ�����Լ� ȣ��  
	}
};

int main(){
	Police pol;
	pol.UseWeapon();
} 
