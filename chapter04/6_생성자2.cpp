#include<iostream>
using namespace std;

class AAA{
	int i;
	int j;
public:
	AAA(int _i =0 , int _j = 0){ //함수의 오버로딩 //디폴트 매개변수사용. 
		cout<<"3. 매개변수가 두개인 생성자 호출"<<endl;
		i = _i;
		j = _j; 
	}
	void showData(){
		cout<<"i : "<<i<<" j : "<<j<<endl;
	}
};
//디폴트 생성자는 생성자를 하나도 만들지 않았을때 만들어진다.
// >> 매개변수가 가장 많은 생성자를 만듦:디폴트 매개변수사용.
//생성자가없어도 객체는 만들어진다. 
int main(){
	AAA a;//객체 생성과동시에 생성자실행 //생성자가 없다면 디폴트 생성자가 자동으로 만들어진다 
	a.showData(); 
	AAA b(100); //2번째를 찾아감
	b.showData();  
	int i,j;
	cout<<"initalize i, j : ";
	cin>>i>>j;
	AAA c(i,j); //3번째를 찾아감 
	c.showData();
}
