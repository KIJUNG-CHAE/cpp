#include<iostream>
using namespace std;
//Complex 클래스 
class Complex{
	double re;
	double im;
public:
	Complex(double _re = 0, double _im = 0){
		re = _re;
		im = _im;
	}
	
	void SetReal(double _re){
		re = _re;
	}
	void SetImagin(double _im){
		im = _im;
	}
	
	double GetReal(){
		return re;
	}
	double GetImagin(){
		return im;
	}
	
	void Display(){
		if(im>=0) cout<<re<<"+"<<im<<"i"<<endl;
		else cout<<re<<im<<"i"<<endl; 
	}
};

Complex Add(Complex &a ,Complex &b);
Complex Sub(Complex &a ,Complex &b);
Complex Mul(Complex &a ,Complex &b);
Complex Div(Complex &a ,Complex &b);

//메인함수 
int main(){
	Complex co1(-5.3,2);
	cout<<"첫번째 복소수 : "; 
	co1.Display();
	Complex co2(7,-4.6);
	cout<<"두번째 복소수 : "; 
	co2.Display();
	Complex result;
	
	cout<<"========복소수의 사칙연산========"<<endl<<"복소수의 덧셈"<<endl; 
	result = Add(co1,co2); 
	result.Display();
	cout<<"복소수의 뺄셈"<<endl; 
	result = Sub(co1,co2);
	result.Display();
	cout<<"복소수의 곱셈"<<endl; 
	result = Mul(co1,co2);
	result.Display();
	cout<<"복소수의 나눗셈"<<endl; 
	result = Div(co1,co2);
	result.Display();
}

//전역함수
Complex Add(Complex &a ,Complex &b){
	Complex c;
	c.SetReal(a.GetReal()+b.GetReal());
	c.SetImagin(a.GetImagin()+b.GetImagin());
	return c;
}

Complex Sub(Complex &a ,Complex &b){
	Complex c;
	c.SetReal(a.GetReal()-b.GetReal());
	c.SetImagin(a.GetImagin()-b.GetImagin());
	return c;
}

Complex Mul(Complex &a ,Complex &b){
	Complex c;
	c.SetReal(a.GetReal()*b.GetReal()-a.GetImagin()*b.GetImagin());
	c.SetImagin(a.GetReal()*b.GetImagin()+a.GetImagin()*b.GetReal());
	return c;
}

Complex Div(Complex &a ,Complex &b){
	Complex c;
	c.SetReal((a.GetReal()*b.GetReal() + a.GetImagin()*b.GetImagin())/
	(b.GetReal()*b.GetReal()+b.GetImagin()*b.GetImagin()));
	c.SetImagin((a.GetImagin()*b.GetReal() - a.GetReal()*b.GetImagin())/
	(b.GetReal()*b.GetReal()+b.GetImagin()*b.GetImagin()));
	return c;
}
