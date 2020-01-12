#include<iostream>
using namespace std;

class Cudgel{//부모클래 스 
public:
	Cudgel(){
		cout<<"Cudgel()호출 : "<<this<<endl;	
	}
	~Cudgel(){
		cout<<"~Cudgel()호출 : "<<this<<endl;		
	}
	void Swing(){
		cout<<"Swing a cudgel"<<endl;
	}
}; 

class Police:public Cudgel{
public:
	Police(){
		cout<<"Police()호출 : "<<this<<endl;	
	}
	~Police(){
		cout<<"~Police()호출 : "<<this<<endl;		
	}
	void UseWeapon(){
		Swing();//부모클래스함수 호출  
	}
};

int main(){
	Police pol;
	pol.UseWeapon();
} 
