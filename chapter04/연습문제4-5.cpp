#include<iostream>
using namespace std;

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

int main(){
	Time time1(10);	// 10시 0분 0초 
	Time time2(10,20);  // 10시 20분 0초 
	Time time3(10,20,30); // 10시 20분 30초
	
	time2.ShowTime();
	time2.ShowTimeinSec();
	
	return 0;
}
