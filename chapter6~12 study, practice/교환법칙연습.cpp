#include<iostream>
using namespace std;

class Point{
	int x;
	int y;
public:
	Point(int _x = 0,int _y = 0):x(_x),y(_y){}
	Point operator+(int value){
		Point temp(x + value, y+value);
		return temp;
	}
	friend Point operator+(int val, Point& a);
	Point& operator+=(int val){
		x +=val;
		y+=val;
		return *this;
	}
	friend ostream& operator<<(ostream& os,const Point& a);//friend ostream& operator=(ostream& os,const Point& a);
	friend istream& operator>>(istream& is,Point& a);
}; 

Point operator+(int val, Point& a){
	return a + val;
}
ostream& operator<<(ostream& os, const Point& a){
	os<<"( "<<a.x<<" , "<<a.y<<" )"<<endl;
	return os;
}

istream& operator>>(istream& is,Point& a){//friend istream& operator=(istream& is,Point& a){
	is>>a.x>>a.y;
}

int main(){
	Point p(5,7);
	cout<< "p:" ;

	cout << p;
	Point q = p+5;
	cout<<"q = p+5 q:"<<q;

	q=10+p;
	cout<<"q = 10+p q:"<<q;

	p+=15; 
	cout<<"p += 15 p:";
	cout<<p;

	cout<< p<<endl;
	int x,y;
	cout <<"object r x,y input : ";

	Point r;
	cin>>r;

	cout<<"object rÀÇ °ª:"<<r;
}
