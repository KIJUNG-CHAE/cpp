#include<iostream>
using namespace std;

class Point{
	int x;
	int y;
public:
	void setX(int _x){
		if(_x<0 || _x>100){
			cout<<"input error"<<endl;
			x = 0;
			return;
		}
		x = _x;
	}                  
	void setY(int _y){
		if(_y<0 || _y>100){
			cout<<"input error"<<endl;
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
	void showData(){
		cout<<"1.ÁÂÇ¥´Â : ("<<x<<" ,"<<y<<") ÀÔ´Ï´Ù."<<endl;
	}
};

int main(){
	int x,y;
	cout<<"1.ÁÂÇ¥ÀÔ·Â : ";
	cin>>x>>y;
	Point p;//°´Ã¼ »ý¼º 
	p.setX(x);
	p.setY(y);
	p.showData();
}           
