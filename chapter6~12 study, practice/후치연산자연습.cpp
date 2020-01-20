#include<iostream>
using namespace std;

class Point{
	int x;
	int y;
public:
	Point(int _x =0, int _y = 0):x(_x),y(_y){}
	void ShowPosition(){
		cout<<"( "<<x<<" , "<<y<<" )"<<endl;
	}

	friend Point operator++(Point& a,int);//굳이 전역함수로 안써도된다. 
	friend Point operator--(Point& a,int);
}; 
 Point operator++(Point& a,int){//friend Point operator++(Point& a,int){
	Point temp(a.x,a.y);//	Point temp(x,y);
	a.x++;
	a.y++;
	return temp;
}
Point operator--(Point& a,int){
	Point temp(a.x,a.y);
	a.x--;
	a.y--;
	return temp;
}



int main(){
	Point p(3,4) , q;
	cout<<"p:";
	p.ShowPosition();
	cout<<"q:";
	q.ShowPosition();
	
	cout<< "후치증가되는줄 p : ";
	(p ++).ShowPosition();//템프의 복사본을 보여2줌 증가되기전에 값  
	cout<<"후치 증가 후 p : " ;
	p.ShowPosition();
	
	cout<< "후치증가되는줄 p : ";
	p.ShowPosition();
	cout<< "후치감소 되는줄 p : ";
	(p--).ShowPosition();
	cout<<"후치 감소 후 p : " ;
	p.ShowPosition();
}
