#include<iostream>

using namespace std;

class Point{
	int x;
	int y;
public:
	Point(int _x = 0,int _y = 0):x(_x),y(_y){
		cout<<"������ ȣ��"<<endl;
	}
	Point(Point& p){
		cout<<"��������� ȣ��"<<endl ;
	}
	~Point(){
		cout<<"�Ҹ��� ȣ��"<<endl; 
	}
	void ShowPosition(){
		cout<<"("<<x<<" , "<<y<<")"<<endl;
	}
	Point operator+(int value){
		Point temp(x+value,y+value);
		return temp; //������� 
	}
	
	Point operator++(){
		x++;
		y++;
		return *this; //����x,  . ��� ���۷����� ����ϴ°� �� 
	}
	Point operator--(){
		x--;
		y--;
		return *this; //����x,  . ��� ���۷����� ����ϴ°� �� 
	}	
	friend Point operator-(const Point& a, int value); //�����Լ� 
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
	++(++p); //p �ι��߰� 
	p.ShowPosition();
	cout<<"--p:";
	--p;
	p.ShowPosition();
}
