#include<iostream>
using namespace std;

template<typename T>
class Data{
	T data;
public:
	Data(T _data){//문자열일경우 왜 동적할당을 안쓰는지 ? 
		data = _data;
	}
	T getData(){
		return data;
	}
	void setData(T _data){
		data = _data;
		
	}
};
int main(){
	Data<int> d1(10);
	cout<<d1.getData()<<endl;
	Data<double> d2(13.1);
	cout<<d2.getData()<<endl;
	Data<char> d3('a');
	cout<<d3.getData()<<endl;
	Data<char*> d4("abcd");
	cout<<d4.getData()<<endl;
}
