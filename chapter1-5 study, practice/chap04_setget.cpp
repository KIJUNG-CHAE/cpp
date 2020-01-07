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
		cout<<"xÁÂÇ¥ : "<<x<<" , yÁÂÇ¥ : "<<y<<endl; 
	}
};

int main(){
	int x,y;
	Point p;
	cout<<"ÁÂÇ¥ÀÔ·Â : ";
	cin>>x>>y;
	p.SetX(x);
	p.SetY(y);
	p.ShowData(); 
}
