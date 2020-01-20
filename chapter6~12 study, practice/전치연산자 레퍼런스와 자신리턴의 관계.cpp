#include<iostream>

using namespace std;

class Point{
	int x;
	int y;
public:
	Point(int _x = 0,int _y = 0):x(_x),y(_y){
		cout<<"생성자 호출"<<endl;
	}
	Point(Point& p){
		cout<<"복사생성자 호출"<<endl ;
	}
	~Point(){
		cout<<"소멸자 호출"<<endl; 
	}
	void ShowPosition(){
		cout<<"("<<x<<" , "<<y<<")"<<endl;
	}
	Point operator+(int value){
		Point temp(x+value,y+value);
		return temp; //복사생성 
	}
	
	Point operator++(){
		x++;
		y++;
		return *this; //복사x,  . 사용 래퍼런스를 사용하는게 편리 
	}
	Point operator--(){
		x--;
		y--;
		return *this; //복사x,  . 사용 래퍼런스를 사용하는게 편리 
	}	
	friend Point operator-(const Point& a, int value); //전역함수 
};

Point operator-(const Point& a, int value){
	Point temp(a.x-value,a.y-value);
	return temp;
}

int main(){
	Point p(3,4);
	cout<<"p:";
	p.ShowPosition();

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
