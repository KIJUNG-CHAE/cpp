#include<iostream>
//���ϰ��� ���οü  
using namespace std;

class Point{
	int x;
	int y;
public:
	Point(int _x = 0,int _y = 0):x(_x),y(_y){}
	void ShowPosition(){
		cout<<"("<<x<<" , "<<y<<")"<<endl;
	}	
	Point operator++(int){//�ڽ��� ���ư��°Ծƴ϶� ���� ���鰴ü�� ����������� ���󼭷��۷��� ������ ��������  
		Point temp(x,y);//int�� ����ؼ� ��ġ ��ġ���걸���� �����. 
		x++;
		y++;
		return temp; //����x,  . ��� ���۷����� ����ϴ°� �� 
	}
	friend Point operator--(Point& a, int);
};

Point operator--(Point& a, int){
	Point temp(a.x,a.y);
	a.x--;
	a.y--;
	return temp; 
	
}

int main(){
	Point p(3,4) , q;
	cout<<"p:";
	p.ShowPosition();
	cout<<"q:";
	q.ShowPosition();
	
	cout<< "��ġ�����Ǵ��� p : ";
	(p ++).ShowPosition();//������ ���纻�� ����2�� �����Ǳ����� ��  
	cout<<"��ġ ���� �� p : " ;
	p.ShowPosition();
	cout<< "��ġ���� �Ǵ��� p : ";
	(p--).ShowPosition();
	cout<<"��ġ ���� �� p : " ;
	p.ShowPosition();
}
