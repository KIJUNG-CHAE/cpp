#include<iostream>
#include<cstring>
using namespace std;

template<typename T>
T Add(T a, T b){ //�Լ� ���� ��  
	return a+b;
}

int main(){
	cout<<"Add(5,7) : "<<Add(5,7)<<endl;
	cout<<"Add(5.5,7.9) : "<<Add(5.5,7.9)<<endl;//�������� ���ø��Լ� 
	string str1 = "abc";
	string str2 = "def";
	cout<<"Add(str1,str2) : "<<Add(str1,str2) <<endl;
} 
