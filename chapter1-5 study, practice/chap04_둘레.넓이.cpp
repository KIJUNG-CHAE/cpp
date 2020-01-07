#include<iostream>
using namespace std;

class Rectangle{
	int x;
	int y;
public:
	Rectangle(int _x = 0, int _y = 0){
		x=_x;
		y=_y;
	}
	~Rectangle(){}
	
	void SetX(int _x){
		x=_x;
	}
	void SetY(int _y){
		y=_y;
	}
	int GetX(){
		return x;
	}
	int GetY(){
		return y;
	}
	
	int GetArea(){
		return x*y;
	}
	int GetRound(){
		return 2*(x+y);
	}
};

class Circle{
	int r;
public:
	Circle(int _r = 0){
		r=_r;
	}
	~Circle(){}
	
	void SetR(int _r){
		r=_r;
	}
	
	int GetR(){
		return r;
	}
	
	int GetArea(){
		return 3.14*r*r;
	}
	int GetRound(){
		return 2*3.14*r;
	}
};

int main(){
	Rectangle rec(3,4);
	cout<<"면적 : "<<rec.GetArea()<<endl;
	cout<<"둘레 : "<<rec.GetRound()<<endl; 
	
	Circle ring(5);
	cout<<"면적 : "<<ring.GetArea()<<endl;
	cout<<"둘레 : "<<ring.GetRound()<<endl; 
	
}

















