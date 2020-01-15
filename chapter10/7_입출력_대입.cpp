#include <iostream>
using namespace std;

class Point{
	int x;
	int y;
public:
	Point(int _x=0,int _y=0):x(_x),y(_y){}
	
	void ShowPosition(){
		cout<<"("<<x<<" , "<<y<<")"<<endl;
	}
	Point operator+(int val){
//		Point temp(x+val,y+val);
//		return temp;
	return Point(x+val,y+val);//����Ÿ���̴ٸ����� �Լ� �����ε��̶� ����� ����. 
	}
	Point& operator+=(int val){
		x += val;
		y += val;
		return *this;
	}
	Point& operator=(const Point& p){
		cout<<"=������ ȣ��"<<endl;
		x=p.x;
		y=p.y;
		return *this;
	}
	friend Point operator+(int val ,  Point& p);
	friend ostream& operator<<(ostream& os, const Point& p);
	friend istream& operator>>(istream& is, Point& p);//���� �ٲ����ϱ⶧����const �� ����ϸ� �ȵ���  
};

Point operator+(int val ,  Point& p){
//	Point temp(p.x+val,p.y+val);
//	return temp;
	return p + val;
}

ostream& operator<<(ostream& os, const Point& p){
	os << "("<<p.x<<" , "<<p.y<<")"<<endl;
	return os;
}

istream& operator>>(istream& is, Point& p){
	is >> p.x >>p.y;
	return is; 
}

int main(){
	Point p(5,7);
	cout<< "p:" ;
//	p.ShowPosition();
	cout << p;
	Point q = p+5;
	cout<<"q = p+5 q:"<<q;
//	q.ShowPosition();
	q=10+p;
	cout<<"q = 10+p q:"<<q;
//	q.ShowPosition();
	
	p+=15; 
	cout<<"p += 15 p:";
	cout<<p;
//	p.ShowPosition();
	cout<< p<<endl; //cout.operator<<(p)x cout�� �ǵ帱������ ���� ����Լ��� ���������Ѵ�.>�����Լ�   cout�� ostream�� ��ü ��  
	int x,y;
	cout <<"object r x,y input : ";
//	cin>>x>>y;
	Point r;
	cin>>r;

	cout<<"object r�� ��:"<<r;
	p=r;
	cout<<"p=r p:"<< p;
}
//��ȯ��Ģ �ӽð� ü  














