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
	return Point(x+val,y+val);//리턴타입이다른것을 함수 오버로딩이랑 상관이 없다. 
	}
	Point& operator+=(int val){
		x += val;
		y += val;
		return *this;
	}
	Point& operator=(const Point& p){
		cout<<"=연산자 호출"<<endl;
		x=p.x;
		y=p.y;
		return *this;
	}
	friend Point operator+(int val ,  Point& p);
	friend ostream& operator<<(ostream& os, const Point& p);
	friend istream& operator>>(istream& is, Point& p);//값이 바뀌어야하기때문에const 를 사용하면 안돈다  
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
	cout<< p<<endl; //cout.operator<<(p)x cout을 건드릴수없다 따라서 멤버함수를 만들지못한다.>전역함수   cout은 ostream의 객체 임  
	int x,y;
	cout <<"object r x,y input : ";
//	cin>>x>>y;
	Point r;
	cin>>r;

	cout<<"object r의 값:"<<r;
	p=r;
	cout<<"p=r p:"<< p;
}
//교환법칙 임시객 체  














