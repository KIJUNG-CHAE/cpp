#include<iostream>
using namespace std;

class Point{
	int x;
	int y;
public:
	void SetX(int _x){
		x = _x;
	}
	void SetY(int _y){
		y = _y;
	}
	int getX(){
		return x;
	}
	int getY(){
		return y;
	}
	void ShowData(){
		cout<<"x��ǥ : "<<x<<" , y��ǥ : "<<y<<endl; 
	}
};

int main(){
	int x,y;
	Point p;
	cout<<"��ǥ�Է� : ";
	cin>>x>>y;
	p.SetX(x);
	p.SetY(y);
	p.ShowData(); 
}
