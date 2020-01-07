#include<iostream>
#include<cstring>
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
	
	double GetArea(){
		return 3.14*r*r;
	}
	double GetRound(){
		return 2*3.14*r;
	}
};

class Time{
	int h;
	int m;
	int s;
public:
	Time(int _h , int _m = 0, int _s = 0){
		h=_h;
		m=_m;
		s=_s;
	}
	
	void ShowTime(){
		cout<<"[ "<<h<<"�� "<<m<<"�� "<<s<<"�� ]"<<endl; 
	}
	void ShowTimeInSec(){
		cout<<h*60*60+m*60+s<<" ��"<<endl;
	}
};
class NameCard{
	char *name;
	char *phone;
	char *url;
	char *pos;
public:
	NameCard(const char *_name = "", const char *_phone = "", //�ּҸ޸𸮰�������Ÿ�� 
	const char *_url = "", const char *_pos = ""){
		name = new char[strlen(_name)+1];
		strcpy(name,_name);
		phone = new char[strlen(_phone)+1];
		strcpy(phone,_phone);
		url = new char[strlen(_url)+1];
		strcpy(url,_url);
		pos = new char[strlen(_pos)+1];
		strcpy(pos,_pos);
	}
	~NameCard(){
		delete []name;
		delete []phone;
		delete []url;
		delete []pos;
	} 
	void ShowData(){
		cout<<"�̸� : "<<name<<endl; 
		cout<<"��ȭ��ȣ : "<<phone<<endl; 
		cout<<"�ּ� : "<<url<<endl; 
		cout<<"���� : "<<pos<<endl; 
	}
};

int main(){
	Rectangle rec(3,4);
	cout<<"���� : "<<rec.GetArea()<<endl;
	cout<<"�ѷ� : "<<rec.GetRound()<<endl; 
	
	Circle ring(5);
	cout<<"���� : "<<ring.GetArea()<<endl;
	cout<<"�ѷ� : "<<ring.GetRound()<<endl; 
	
	Time time1(10);
	time1.ShowTime();
	Time time2(10,20);
	time2.ShowTime();
	time2.ShowTimeInSec();
	Time time3(10,20,30);
	time3.ShowTime();
	time3.ShowTimeInSec();
	
	NameCard Hong("ȫ�浿","010-1234-5678","���� ������ �ּҰ�����","����");
	Hong.ShowData();
	return 0;
	
}
