#include<iostream>
using namespace std;

class Point{
	int x;
	int y;
public:
	Point(int _x = 0,int _y = 0):x(_x),y(_y){}

	void ShowPosition(){
		cout<<"( "<<x<<" , "<<y<<" )"<<endl;
	}
	Point& operator++(){
		x++;
		y++;
		return *this;
	}
	Point& operator--(){
		x--;
		y--;
		return *this;
	}
};



int main(){
	Point p(3,4) , q;
	cout<<"p:";
	p.ShowPosition();
	cout<<"q:";
	q.ShowPosition();
	
	cout<<"++p:";
	++p;
	p.ShowPosition();
	cout<<"++(++p):";
	++(++p); //p 두번중가 
	p.ShowPosition();
	cout<<"--p:";
	--p;
	p.ShowPosition();
}
