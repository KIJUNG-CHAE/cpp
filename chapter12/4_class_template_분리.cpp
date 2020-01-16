#include<iostream>;
using namespace std;

template<typename T>
class Data{  //Ŭ���� ���ø�. //�ڷ��������ֹ�������. 
	T data;
public:
	Data(T _d);
	void SetData(T _d);
	T GetData();
};

template<typename T>//template�� ������Ͽ� �и��� �Լ��� �� �����Ѵ�  
Data<T>::Data(T _d){
	data=_d;
}
template<typename T>
void Data<T>::SetData(T _d){
	data = _d;
}
template<typename T>
T Data<T>::GetData(){
	return data;
}


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
