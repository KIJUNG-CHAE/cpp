#include<iostream>
using namespace std;

class Complex{
	int r;
	int i;
public:
	Complex(int _r,int _i):r(_r),i(_i){}
	
	Complex operator+(int val){
		return Complex(r+val,i+val);
	}
	Complex& operator++(int){
		r++;
		i++;
		return *this;
	}
	Complex& operator+=(int val){
		r += val;
		i += val;
		return *this;
	}
	Complex& operator+=(const Complex& c){
		r += c.r;
		i += c.i;
		return *this;
	}
	Complex& operator=(const Complex& c){
		r = c.r;
		i = c.i;
		return *this;
	}
	friend Complex operator--( Complex& c);
	friend Complex operator+(int val, Complex& c);
	friend ostream& operator<<(ostream& os, const Complex& c);
	friend istream& operator>>(istream& is, Complex& c);
};
Complex operator+(int val, Complex& c){
	return c + val;
}
Complex operator--(Complex& c){
	Complex temp(c.r,c.i);
	c.r--;
	c.i--;
	return temp;
}
ostream& operator<<(ostream& os, const Complex& c){
	if(c.i<0){
		os<<c.r<<c.i<<"i"<<endl;
	}
	else{
		os<<c.r<<"+"<<c.i<<"i"<<endl;
	}
	return os;
}
istream& operator>>(istream& is, Complex& c){
	is>>c.r>>c.i;
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
	

	cout<<endl<<"p++��  p:"<<p<<endl;
	cout<<endl<<"p++��  p:"<<p++<<endl;
	

	cout<<endl<<"--q�� q:"<<--p<<endl;
	cout<<endl<<"--q�� q:"<<p<<endl;
	
	p+=q;
	cout << endl<<"p+=q p:"<<p<<endl;
	
	cout<<"object p x,y input : ";
	cin>>p;
	cout<<"imput value p : "<<p<<endl;
	
	q=p;
	cout<<"q=p �� q : "<<q<<endl;
}

