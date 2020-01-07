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

//�����Լ� 
int main(){
	double real, imag;
	char op;
	Complex com1;
	Complex com2;
	Complex com3;
	
	cout<<"ù��° ���Ҽ��� �Ǽ��� ��� : ";
	cin>>real>>imag;
	com1.SetRe(real);
	com1.SetIm(imag);
	com1.Display();
	cout<<endl<<"�ι�° ���Ҽ��� �Ǽ��� ��� : ";
	cin>>real>>imag;
	com2.SetRe(real);
	com2.SetIm(imag);
	com2.Display();
	cout<<endl<<"�����ȣ +, -, *, / �� ���� : ";
	cin>>op;
	cout<<endl<<"================�����================="<<endl; 
	
	switch (op){
		case '+': {
			cout<<"���Ҽ��� ����"<<endl; 
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
			cout<<"���Ҽ��� ����"<<endl; 
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
			cout<<"���Ҽ��� ����"<<endl; 
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
			cout<<"���Ҽ��� ������"<<endl; 
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

//�����Լ�
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
