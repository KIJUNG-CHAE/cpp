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

class PointShow{ //번거로운작업
public:
	void showData(Point &a){
		cout<<"p의 좌표 ("<<a.getX()<<", "<<a.getY()<<") 입니다."<<endl;
	}
};
int main(){
	int x,y;
	cout<<"1.좌표입력 : ";
	cin>>x>>y;
	Point p;//객체 생성 
	p.setX(x);
	p.setY(y);
	cout<<"p의 좌표 ("<<p.getX()<<", "<<p.getY()<<") 입니다."<<endl; 
	PointShow show; //객체 생성 
	show.showData(p);
}           
