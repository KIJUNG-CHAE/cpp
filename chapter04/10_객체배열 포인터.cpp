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
	Point(int _x,int _y){
		cout<<"매개변수 두개인 생성자호출"<<endl;
		x=_x;
		y=_y;
	}
	~Point(){
		cout<<"소멸자호출"<<endl;
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
	Point* arr[5];//객체배열은 초기값을 원하는값으로초기화시킬수 없다 
	int i;
	cout<<endl<<"array초기화"<<endl;
	for(i=0;i<5;i++){
		arr[i] = new Point(i*2,i*3);//arr[i]는 주소임.
	}
	cout<<endl<<"array내용출력"<<endl;
	for(i=0;i<5;i++)
		arr[i]->showData();//주소에 찾아가서 그내용을 보여줘 
	cout<<endl<<"연결된 heap영역 삭제"<<endl;
	for(i=0;i<5;i++){
		delete arr[i];
	}
}
