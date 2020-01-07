#include<iostream>
using namespace std;

class Point{
	int x;
	int y;
public:
	Point(){
		cout<<"1.생성자호출"<<endl;
		x = 2;
		y = 3;
	}
	void setX(int _x){
		x = _x;
	}
	void setY(int _y){
		y = _y;
	}
	int getX(){
		return x;
	}
	int getY(){
		return y;
	}
	void showData(){
		cout<<"( "<<x<<" , "<<y<<" )"<<endl;
	}
};

int main(){
	Point arr[5];//객체배열은 초기값을 원하는값으로초기화시킬수 없다 
	int i;
	cout<<endl<<"array 내용 출력"<<endl;
	for(i=0;i<5;i++)
		arr[i].showData();
	cout<<endl<<"array초기화"<<endl;
	for(i=0;i<5;i++){
		arr[i].setX(i*2);
		arr[i].setY(i*3);
	}
	for(i=0;i<5;i++)
		arr[i].showData();
}
