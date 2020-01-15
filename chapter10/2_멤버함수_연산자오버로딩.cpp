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
	Point operator+(int value){
		Point temp(x+value,y+value);
		return temp; //복사생성 
	}
	
};

int main(){
	Point p(3,4) , q;
	cout<<"p:";
	p.ShowPosition();
	cout<<"q:";
	q.ShowPosition();
//	p.operator+(5);
	q=p.operator+(3);
//	q = p +3;
	cout<<"q = p+3:";
	q.ShowPosition();
}
