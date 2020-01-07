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
	
	void SetRe(double _re){
		re = _re;
	}
	void SetIm(double _im){
		im = _im;
	}
	
	double GetRe(){
		return re;
	}
	double GetIm(){
		return im;
	}
	
	void Display(){
		if(im>=0) cout<<re<<" +"<<im<<"i";
		else cout<<re<<" "<<im<<"i"; 
	}
};

Complex Add(Complex &a ,Complex &b);
Complex Subtract(Complex &a ,Complex &b);
Complex Multiply(Complex &a ,Complex &b);
Complex Divide(Complex &a ,Complex &b);

//메인함수 
int main(){
	double real, imag;
	char op;
	Complex com1;
	Complex com2;
	Complex com3;
	
	cout<<"첫번째 복소수의 실수와 허수 : ";
	cin>>real>>imag;
	com1.SetRe(real);
	com1.SetIm(imag);
	com1.Display();
	cout<<endl<<"두번째 복소수의 실수와 허수 : ";
	cin>>real>>imag;
	com2.SetRe(real);
	com2.SetIm(imag);
	com2.Display();
	cout<<endl<<"연산기호 +, -, *, / 중 선택 : ";
	cin>>op;
	cout<<endl<<"================계산결과================="<<endl; 
	
	switch (op){
		case '+': {
			cout<<"복소수의 덧셈"<<endl; 
			com3 = Add(com1,com2);
			cout<<"( ";
			com1.Display();
			cout<<" ) + ( ";
			com2.Display();
			cout<<" ) = ";
			com3.Display();
			break;
		}
		case '-': {
			cout<<"복소수의 뺄셈"<<endl; 
			com3 = Subtract(com1,com2); 
			cout<<"( ";
			com1.Display();
			cout<<" ) - ( ";
			com2.Display();
			cout<<" ) = ";
			com3.Display();
			break;
		}
		case '*': {
			cout<<"복소수의 곱셈"<<endl; 
			com3 = Multiply(com1,com2); 
			cout<<"( ";
			com1.Display();
			cout<<" ) * ( ";
			com2.Display();
			cout<<" ) = ";
			com3.Display();
			break;
		}
		case '/': {
			cout<<"복소수의 나눗셈"<<endl; 
			com3 = Divide(com1,com2); 
			cout<<"( ";
			com1.Display();
			cout<<" ) / ( ";
			com2.Display();
			cout<<" ) = ";
			com3.Display();
			break;
		}
	}
}

//전역함수
Complex Add(Complex &a ,Complex &b){
	Complex result;
	result.SetRe(a.GetRe()+b.GetRe());
	result.SetIm(a.GetIm()+b.GetIm());
	return result;
}

Complex Subtract(Complex &a ,Complex &b){
	Complex result;
	result.SetRe(a.GetRe()-b.GetRe());
	result.SetIm(a.GetIm()-b.GetIm());
	return result;
}

Complex Multiply(Complex &a ,Complex &b){
	Complex result;
	result.SetRe(a.GetRe()*b.GetRe()-a.GetIm()*b.GetIm());
	result.SetIm(a.GetRe()*b.GetIm()+a.GetIm()*b.GetRe());
	return result;
}

Complex Divide(Complex &a ,Complex &b){
	Complex result;
	result.SetRe((a.GetRe()*b.GetRe() + a.GetIm()*b.GetIm()) / (b.GetRe()*b.GetRe()+b.GetIm()*b.GetIm()));
	result.SetIm((a.GetIm()*b.GetRe() - a.GetRe()*b.GetIm()) / (b.GetRe()*b.GetRe()+b.GetIm()*b.GetIm()));
	return result;
}
