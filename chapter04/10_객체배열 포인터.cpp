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
	Point(int _x,int _y){
		cout<<"�Ű����� �ΰ��� ������ȣ��"<<endl;
		x=_x;
		y=_y;
	}
	~Point(){
		cout<<"�Ҹ���ȣ��"<<endl;
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
	Point* arr[5];//��ü�迭�� �ʱⰪ�� ���ϴ°������ʱ�ȭ��ų�� ���� 
	int i;
	cout<<endl<<"array�ʱ�ȭ"<<endl;
	for(i=0;i<5;i++){
		arr[i] = new Point(i*2,i*3);//arr[i]�� �ּ���.
	}
	cout<<endl<<"array�������"<<endl;
	for(i=0;i<5;i++)
		arr[i]->showData();//�ּҿ� ã�ư��� �׳����� ������ 
	cout<<endl<<"����� heap���� ����"<<endl;
	for(i=0;i<5;i++){
		delete arr[i];
	}
}
