#include<iostream>
using namespace std;

const int OPEN = 1;//������ ������ �Ѷ� �빮�ڸ� ���� �����. 
const int CLOSE = 2;

class Door{
	int state;//��� ���� 
public: 
	void Open(){
		state = OPEN;
	}
	void Close(){
		state = CLOSE;
	}
	void showState(){
		if(state == OPEN) cout<<" ���� ���ȴ�"<<endl;
		else cout<<" ���� ������"<<endl; 
	}
	void showState1(){
		cout<<((state == OPEN)?" ���� ���ȴ�":" ���� ������")<<endl;	
	}
};

int main(){
	Door d;
	// d.state = OPEN;//�����߻�  
	d.Open();
	d.showState();
	d.Close();
	d.showState1();
}
