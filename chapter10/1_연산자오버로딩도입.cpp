#include<iostream>
//멤버함수로 만든 함수오버로딩 
using namespace std;

class Point{
	int x;
	int y;
public:
	Point(int _x = 0,int _y = 0):x(_x),y(_y){}
	void ShowPosition(){
		cout<<"("<<x<<" , "<<y<<")"<<endl;
	}
	void operator+(int value){
		x += value;
		y += value;
	}
	
};

int main(){
	Point p(3,4);
	cout<<"p:";
	p.ShowPosition();
//	p.operator+(5);
	p+5;
	cout<<"p+5:";
	p.ShowPosition();
}
