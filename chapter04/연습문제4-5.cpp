#include<iostream>
using namespace std;

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

int main(){
	Time time1(10);	// 10�� 0�� 0�� 
	Time time2(10,20);  // 10�� 20�� 0�� 
	Time time3(10,20,30); // 10�� 20�� 30��
	
	time2.ShowTime();
	time2.ShowTimeinSec();
	
	return 0;
}
