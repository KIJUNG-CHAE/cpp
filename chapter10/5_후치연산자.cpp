#include<iostream>
//리턴값이 새로운객체  
using namespace std;

class Point{
	int x;
	int y;
public:
	Point(int _x = 0,int _y = 0):x(_x),y(_y){}
	void ShowPosition(){
		cout<<"("<<x<<" , "<<y<<")"<<endl;
	}	
	Point operator++(int){//자신이 돌아가는게아니라 새로 만들객체를 전달해줘야함 따라서레퍼런스 변수를 쓰지않음  
		Point temp(x,y);//int를 사용해서 후치 전치연산구분을 약속함. 
		x++;
		y++;
		return temp; //복사x,  . 사용 래퍼런스를 사용하는게 편리 
	}
	friend Point operator--(Point& a, int);
};

Point operator--(Point& a, int){
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
	cout<< "후치감소 되는줄 p : ";
	(p--).ShowPosition();
	cout<<"후치 감소 후 p : " ;
	p.ShowPosition();
}
