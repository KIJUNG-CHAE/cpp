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

class Police{
	Cudgel *cud;//멤버변수로 다른객체를 가지고(주소를 가지고있어ㅏ도)이쓴거ㅕ우도 헤즈어 관계이 다  외관상 상속은 아니지만. 
	//perment department도 헤즈어 상속관계이다 
public:
	Police(){
		cout<<"Police()호출 : "<<this<<endl;	
		cud = new Cudgel();
	}
	~Police(){
		cout<<"~Police()호출 : "<<this<<endl;
		delete cud;		
	}
	void UseWeapon(){
		cud->Swing();//부모클래스함수 호출  
	}
};

int main(){
	Police pol;
	pol.UseWeapon();
} 
