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
		cout<<"[ "<<h<<"시 "<<m<<"분 "<<s<<"초 ]"<<endl; 
	}
	void ShowTimeInSec(){
		cout<<h*60*60+m*60+s<<" 초"<<endl;
	}
};
class NameCard{
	char *name;
	char *phone;
	char *url;
	char *pos;
public:
	NameCard(const char *_name = "", const char *_phone = "", //주소메모리공간을나타냄 
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
		cout<<"이름 : "<<name<<endl; 
		cout<<"전화번호 : "<<phone<<endl; 
		cout<<"주소 : "<<url<<endl; 
		cout<<"직급 : "<<pos<<endl; 
	}
};

int main(){
	Rectangle rec(3,4);
	cout<<"면적 : "<<rec.GetArea()<<endl;
	cout<<"둘레 : "<<rec.GetRound()<<endl; 
	
	Circle ring(5);
	cout<<"면적 : "<<ring.GetArea()<<endl;
	cout<<"둘레 : "<<ring.GetRound()<<endl; 
	
	Time time1(10);
	time1.ShowTime();
	Time time2(10,20);
	time2.ShowTime();
	time2.ShowTimeInSec();
	Time time3(10,20,30);
	time3.ShowTime();
	time3.ShowTimeInSec();
	
	NameCard Hong("홍길동","010-1234-5678","집을 나가서 주소가없음","의적");
	Hong.ShowData();
	return 0;
	
}
