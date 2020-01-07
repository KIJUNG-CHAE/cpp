#include<iostream>
#include<cstring>
using namespace std;

class Rectangle{
	int x;
	int y;
public:
	Rectangle(int _x = 1, int _y = 1){
		cout<<"생성자 호출"<<endl;
		x = _x; 
		y = _y;
	}
//	Rectangle(int x = 1, int y = 1){
//		cout<<"생성자 호출"<<endl;
//		this->x = x;  //this를 사용해 이름을 지역변수와 객체변수명을 같이할수있음. 
//		this->y = y;
//	}
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
	Circle(int _r = 1){
		cout<<"생성자 호출"<<endl;
		r = _r;
	}
	double GetArea(){ //실수이기때문에 int가 아니라 double 이다. 
		return r*r*3.14;
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
	Time(int _h, int _m = 0, int _s = 0){
		cout<<"생성자 호출"<<endl;
		h = _h;
		m = _m;
		s = _s;
	}
	void ShowTime(){
		cout<<"["<<h<<"시"<<m<<"분 "<<s<<"초]"<<endl;
	}
	void ShowTimeinSec(){
		cout<<((h*60)+m)*60+s<<"초"<<endl;
	}
};

class NameCard{
	char *name;
	char *phone;
	char *url;
	char *pos;
public:
	NameCard(const char *_name = "", const char *_phone = "",
			 const char *_url = "", const char *_pos = "")
	{
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
		delete[] name;
		delete[] phone;
		delete[] url;
		delete[] pos;
	}
	
	void ShowData(){
		cout<<"1. 이름 : "<<name<<endl; //주소를 cout에 넣을경우 메모리가 끝까지 출력해줌. 
		cout<<"2. 전화번호 : "<<phone<<endl; 
		cout<<"3. 주소 : "<<url<<endl;
		cout<<"4. 직급 : "<<pos<<endl;
	} 
};

int main(){
	Rectangle rec(3,4); //객체의 초기화가 선언되어있기때문에 생성자가 필요하다는 것을 알수있다. 
	cout<<"면적 : "<<rec.GetArea()<<endl;
	cout<<"둘레 : "<<rec.GetRound()<<endl;
	
	Circle ring(5);
	cout<<"면적 : "<<ring.GetArea()<<endl;
	cout<<"둘레 : "<<ring.GetRound()<<endl;
	
	cout<<"===============04_5================="<<endl;
	
	Time time1(10);	// 10시 0분 0초 
	time1.ShowTime();
	
	Time time2(10,20);  // 10시 20분 0초 
	time2.ShowTime();
	time2.ShowTimeinSec();
	
	Time time3(10,20,30); // 10시 20분 30초
	time3.ShowTime();
	
	cout<<"===============04_6================="<<endl;
	NameCard mine("chae","010.1111.1111","www","stud");
	mine.ShowData();
}

//시험 연습문제 예시 main을 보고 class만들기 
