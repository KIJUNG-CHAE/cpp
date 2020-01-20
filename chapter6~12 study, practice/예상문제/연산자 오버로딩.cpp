#include<iostream>
using namespace std;

class Complex{
	int real;
	int imagin;
public:
	Complex(const int _real = 0, const int _imagin = 0):real(_real),imagin(_imagin){}
	
	Complex operator+(int val){
		return Complex(real+val, imagin+val);
	}
	Complex& operator+=(int val){
		real+=val;
		imagin+=val;
		return *this;
	}
	Complex& operator+=(Complex& com){
		real += com.real;
		imagin += com.imagin;
		return *this;
	}
	Complex& operator=(const Complex& com){ 
		real = com.real;
		imagin = com.imagin;
		return *this;
	}
	friend Complex operator+(int val, Complex& com);
	friend ostream& operator<<(ostream& os,const Complex& com);
	friend istream& operator>>(istream& is, Complex& com);
	
	
};

Complex operator+(int val, Complex& com){
	return com + val;
}

ostream& operator<<(ostream& os, const Complex& com){
	os<<com.real<<" + "<<com.imagin<<endl;
	return os;
}

istream& operator>>(istream& is, Complex& com){
	is>>com.real>>com.imagin;
	return is;
}

int main(){
	Complex p(5,6),q(1,2);
	cout<< "p : "<<p<<endl;
	cout<< "q : "<<q<<endl;
	p = p.operator+(5);
	cout<<endl<<"p=p+5 p:"<<p<<endl;
	
	q = 10+q;
	cout <<endl<<"q =10+q q:"<<q<<endl;
	
	p+=10;
	cout<<endl<<"p+=10 p:"<<p<<endl;
	
	
	
	p+=q;
	cout << endl<<"p+=q p:"<<p<<endl;
	
	cout<<"object p x,y input : ";
	cin>>p;
	cout<<"imput value p : "<<p<<endl;
	
	q=p;
	cout<<"q=p ÈÄ q : "<<q<<endl;
}

