#include<iostream>
using namespace std;

class Point{
	int x;
	int y;
public:
	Point(){
		cout<<"1.������ȣ��"<<endl;
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
	Point arr[5];//��ü�迭�� �ʱⰪ�� ���ϴ°������ʱ�ȭ��ų�� ���� 
	int i;
	cout<<endl<<"array ���� ���"<<endl;
	for(i=0;i<5;i++)
		arr[i].showData();
	cout<<endl<<"array�ʱ�ȭ"<<endl;
	for(i=0;i<5;i++){
		arr[i].setX(i*2);
		arr[i].setY(i*3);
	}
	for(i=0;i<5;i++)
		arr[i].showData();
}
