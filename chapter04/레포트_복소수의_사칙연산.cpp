#include<iostream>
using namespace std;
//Complex Ŭ���� 
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

//�����Լ� 
int main(){
	Complex co1(-5.3,2);
	cout<<"ù��° ���Ҽ� : "; 
	co1.Display();
	Complex co2(7,-4.6);
	cout<<"�ι�° ���Ҽ� : "; 
	co2.Display();
	Complex result;
	
	cout<<"========���Ҽ��� ��Ģ����========"<<endl<<"���Ҽ��� ����"<<endl; 
	result = Add(co1,co2); 
	result.Display();
	cout<<"���Ҽ��� ����"<<endl; 
	result = Sub(co1,co2);
	result.Display();
	cout<<"���Ҽ��� ����"<<endl; 
	result = Mul(co1,co2);
	result.Display();
	cout<<"���Ҽ��� ������"<<endl; 
	result = Div(co1,co2);
	result.Display();
}

//�����Լ�
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
