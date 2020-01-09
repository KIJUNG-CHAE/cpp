#include<iostream>
using namespace std;

class AAA{
	int a;
public:
	AAA(){
		cout<<"AAA()호출 , 주소 : "<<this<<endl;
		a=0;
	}
	AAA(int i){
		cout<<"AAA(int i)호출 , 주소 : "<<this<<endl;
		a=i;
	}
	~AAA(){
		cout<<"~AAA()호출 , 주소 : "<<this<<endl;
	}
	void ShowData(){
		cout<<"AAA의 a : "<<a<<endl; 
	}
};

class BBB : public AAA{
	int b;
public:
	BBB(){
		cout<<"BBB()호출 , 주소 : "<<this<<endl;
		b=0;
	}
	BBB(int j):AAA(j){
		cout<<"BBB(int i)호출 , 주소 : "<<this<<endl;
		b=j;
	}
	BBB(int i, int j):AAA(i){
		cout<<"BBB(int i, int j)호출 , 주소 : "<<this<<endl;
		b=j;
	}
	~BBB(){
		cout<<"~BBB()호출 , 주소 : "<<this<<endl;
	}
	void ShowData(){
		AAA::ShowData();
		cout<<"BBB의 b : "<<b<<endl; 
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









