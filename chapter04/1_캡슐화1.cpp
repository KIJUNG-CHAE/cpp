#include<iostream>
using namespace std;

class Point{
	int x;
	int y;
public:
	void setX(int _x){
		if(_x<0 || _x>100){
			cout<<"input x error"<<endl;
			x = 0;
			return;
		}
		x = _x;
	}                  
	void setY(int _y){
		if(_y<0 || _y>100){
			cout<<"input y error"<<endl;
			y = 0;
			return;
		}
		y = _y;
	}
	int getX(){
		return x;
	}
	int getY(){
		return y;
	}

};

int main(){
	int x,y;
	cout<<"1.ÁÂÇ¥ÀÔ·Â : ";
	cin>>x>>y;
	Point p;//°´Ã¼ »ý¼º 
	p.setX(x);
	p.setY(y);
	cout<<"pÀÇ ÁÂÇ¥ ("<<p.getX()<<", "<<p.getY()<<") ÀÔ´Ï´Ù."<<endl; 
}           
