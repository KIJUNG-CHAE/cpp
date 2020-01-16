#include<iostream>;
using namespace std;

template<typename T>
class Data{  //클래스 템플릿. 
	T data;
public:
	Data(T _d){
		data=_d;
	}
	void SetData(T _d){
		data = _d;
	}
	T GetData(){
		return data;
	}
};

int main(){
	Data<int>d1(5);
	cout<< "d1 : "<<d1.GetData()<<endl;
	Data<char>d2('a');
	cout<<"d2 : "<<d2.GetData()<<endl;
	Data<char*>d3("abc");
	cout<< "d3 : "<<d3.GetData()<<endl;
	Data<double>d4(5.5);
	cout<<"d4 : "<<d4.GetData()<<endl;
} 
