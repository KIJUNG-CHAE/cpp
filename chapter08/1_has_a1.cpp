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

class Police:public Cudgel{
public:
	Police(){
		cout<<"Police()ȣ�� : "<<this<<endl;	
	}
	~Police(){
		cout<<"~Police()ȣ�� : "<<this<<endl;		
	}
	void UseWeapon(){
		Swing();//�θ�Ŭ�����Լ� ȣ��  
	}
};

int main(){
	Police pol;
	pol.UseWeapon();
} 
