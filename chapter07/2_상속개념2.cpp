#include<iostream>
using namespace std;

class AAA{
	int a;
public:
	AAA(){
		cout<<"AAA()ȣ�� , �ּ� : "<<this<<endl;
		a=0;
	}
	AAA(int i){
		cout<<"AAA(int i)ȣ�� , �ּ� : "<<this<<endl;
		a=i;
	}
	~AAA(){
		cout<<"~AAA()ȣ�� , �ּ� : "<<this<<endl;
	}
	void ShowData(){
		cout<<"AAA�� a : "<<a<<endl; 
	}
};

class BBB : public AAA{
	int b;
public:
	BBB(){
		cout<<"BBB()ȣ�� , �ּ� : "<<this<<endl;
		b=0;
	}
	BBB(int j):AAA(j){
		cout<<"BBB(int i)ȣ�� , �ּ� : "<<this<<endl;
		b=j;
	}
	BBB(int i, int j):AAA(i){
		cout<<"BBB(int i, int j)ȣ�� , �ּ� : "<<this<<endl;
		b=j;
	}
	~BBB(){
		cout<<"~BBB()ȣ�� , �ּ� : "<<this<<endl;
	}
	void ShowData(){
		AAA::ShowData();
		cout<<"BBB�� b : "<<b<<endl; 
	}
};
int main(){
	BBB b1;
	b1.ShowData();
	cout<<endl;
	
	BBB b2(50);
	b2.ShowData(); 
	cout<<endl;
	
	BBB b3(100,200);
}









