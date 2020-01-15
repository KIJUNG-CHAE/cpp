#include<iostream>
using namespace std;
class Complex{
	double real;
	double imagin;
public:
	Complex(double _real = 0,double _imagin = 0){
		real = _real;
		imagin= _imagin;
	}
	
	Complex operator+(Complex& a){
		Complex temp(real+a.real , imagin+a.imagin);
		return temp;
	}
	Complex operator-(Complex& a){
		Complex temp(real-a.real , imagin-a.imagin);
		return temp;
	}
	void ShowPosition(){
		if(imagin>0){
			cout<<real<<"+"<<imagin<<"i"<<endl;
		}
		else{
			cout<<real<<imagin<<"i"<<endl;
		}
	}
};

int main(){
	Complex c1(5,4),c2(7,8),c3;
	cout<<"c1:";
	c1.ShowPosition();
	cout<<"c2:";
	c2.ShowPosition();
	c3 = c1 +c2;
	cout<<"c3=c1+c2:";
	c3.ShowPosition();
	c3 = c1 -c2;
	cout<<"c3=c1-c2:";
	c3.ShowPosition();
}
