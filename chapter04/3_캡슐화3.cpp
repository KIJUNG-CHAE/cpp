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

class PointShow{ //���ŷο��۾�
public:
	void showData(Point &a){
		cout<<"p�� ��ǥ ("<<a.getX()<<", "<<a.getY()<<") �Դϴ�."<<endl;
	}
};
int main(){
	int x,y;
	cout<<"1.��ǥ�Է� : ";
	cin>>x>>y;
	Point p;//��ü ���� 
	p.setX(x);
	p.setY(y);
	cout<<"p�� ��ǥ ("<<p.getX()<<", "<<p.getY()<<") �Դϴ�."<<endl; 
	PointShow show; //��ü ���� 
	show.showData(p);
}           
