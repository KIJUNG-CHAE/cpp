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
	Cudgel *cud;//��������� �ٸ���ü�� ������(�ּҸ� �������־��)�̾��Ťſ쵵 ����� ������ ��  �ܰ��� ����� �ƴ�����. 
	//perment department�� ����� ��Ӱ����̴� 
public:
	Police(){
		cout<<"Police()ȣ�� : "<<this<<endl;	
		cud = new Cudgel();
	}
	~Police(){
		cout<<"~Police()ȣ�� : "<<this<<endl;
		delete cud;		
	}
	void UseWeapon(){
		cud->Swing();//�θ�Ŭ�����Լ� ȣ��  
	}
};

int main(){
	Police pol;
	pol.UseWeapon();
} 
