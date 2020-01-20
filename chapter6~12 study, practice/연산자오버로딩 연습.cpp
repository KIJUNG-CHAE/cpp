#include<iostream>
using namespace std;
//다짜는데 12분 완성시키는데 20분 
class Complex{
	int real;
	int imagin;
public:
	Complex(int _real = 0, int _imagin = 0):real(_real),imagin(_imagin){}
	
	Complex operator+(int val){
		return Complex(real+val,imagin+val);
	}
	friend Complex operator+(int val,const Complex& a);
	Complex& operator+=(int val){
		real +=val;
		imagin +=val;
		return *this;
	}
	Complex& operator+=(const Complex& a){//Complex& operator+(const Complex& a){
		real +=a.real;
		imagin +=a.imagin;
		return *this;
	}

	
	Complex& operator=(const Complex& a){
		real = a.real;
		imagin = a.imagin;
		return *this;
	}
	friend ostream& operator<<(ostream& os,const Complex& a);//	friend ostream& operater<<(ostream& os,const Complex& a);
	friend istream& operator>>(istream& is,Complex& a);//friend istream& operater>>(istream& is,const Complex& a);
};

Complex operator+(int val, Complex& a){//Complex operator+(int val,const Complex& a){
	return a + val;
}
ostream& operator<<(ostream& os,const Complex& a){
	if(a.imagin>0){
		os<<a.real<<"+"<<a.imagin<<"i"<<endl;//os<<a.real<<"+"<<imagin<<"i"<<endl;
	}
	else{
		os<<a.real<<a.imagin<<"i"<<endl;
	}
	return os;
}

istream& operator>>(istream& is,Complex& a){
	is>>a.real>>a.imagin;
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
	
	cout << endl<<"q :"<<q<<endl;
	
	p+=q;
	cout << endl<<"p+=q p:"<<p<<endl;
	
	cout<<"object p x,y input : ";
	cin>>p;
	cout<<"imput value p : "<<p<<endl;
	
	q=p;
	cout<<"q=p 후 q : "<<q<<endl;
}

