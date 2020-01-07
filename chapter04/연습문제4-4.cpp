#include<iostream>
#include<cstring>
using namespace std;

class Rectangle{
	int x;
	int y;
public:
	Rectangle(int _x = 1, int _y = 1){
		cout<<"������ ȣ��"<<endl;
		x = _x; 
		y = _y;
	}
//	Rectangle(int x = 1, int y = 1){
//		cout<<"������ ȣ��"<<endl;
//		this->x = x;  //this�� ����� �̸��� ���������� ��ü�������� �����Ҽ�����. 
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
		cout<<"������ ȣ��"<<endl;
		r = _r;
	}
	double GetArea(){ //�Ǽ��̱⶧���� int�� �ƴ϶� double �̴�. 
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
		cout<<"������ ȣ��"<<endl;
		h = _h;
		m = _m;
		s = _s;
	}
	void ShowTime(){
		cout<<"["<<h<<"��"<<m<<"�� "<<s<<"��]"<<endl;
	}
	void ShowTimeinSec(){
		cout<<((h*60)+m)*60+s<<"��"<<endl;
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
		cout<<"1. �̸� : "<<name<<endl; //�ּҸ� cout�� ������� �޸𸮰� ������ �������. 
		cout<<"2. ��ȭ��ȣ : "<<phone<<endl; 
		cout<<"3. �ּ� : "<<url<<endl;
		cout<<"4. ���� : "<<pos<<endl;
	} 
};

int main(){
	Rectangle rec(3,4); //��ü�� �ʱ�ȭ�� ����Ǿ��ֱ⶧���� �����ڰ� �ʿ��ϴٴ� ���� �˼��ִ�. 
	cout<<"���� : "<<rec.GetArea()<<endl;
	cout<<"�ѷ� : "<<rec.GetRound()<<endl;
	
	Circle ring(5);
	cout<<"���� : "<<ring.GetArea()<<endl;
	cout<<"�ѷ� : "<<ring.GetRound()<<endl;
	
	cout<<"===============04_5================="<<endl;
	
	Time time1(10);	// 10�� 0�� 0�� 
	time1.ShowTime();
	
	Time time2(10,20);  // 10�� 20�� 0�� 
	time2.ShowTime();
	time2.ShowTimeinSec();
	
	Time time3(10,20,30); // 10�� 20�� 30��
	time3.ShowTime();
	
	cout<<"===============04_6================="<<endl;
	NameCard mine("chae","010.1111.1111","www","stud");
	mine.ShowData();
}

//���� �������� ���� main�� ���� class����� 
