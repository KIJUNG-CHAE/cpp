#include<iostream>

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
	friend Point operator-(const Point& a, int value); //전역함 
};

Point operator-(const Point& a, int value){
	Point temp(a.x-value,a.y-value);
	return temp;
}

int main(){
	Point p(3,4) , q;
	cout<<"p:";
	p.ShowPosition();
	cout<<"q:";
	q.ShowPosition();
	cout<<"멤버함수를 이용한 연산자 오버로딩"<<endl; //멤버함수를쓰면 변수가줄기때문에 편리하다 ㅊ 
//	p.operator+(5);
	q=p.operator+(3);
//	q = p +3;
	cout<<"q = p + 3:";
	q.ShowPosition();
	cout<<"전역함수를 이용한 연산자 오버로딩"<<endl;
//	q = operator-(p,2);
	q = p - 2;
	cout<<"q = p - 2:";
	q.ShowPosition();
}
