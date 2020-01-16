#include<iostream>
#include<cstring>
using namespace std;

template<typename T>
T Add(T a, T b){ //함수 템플 릿  
	return a+b;
}

int main(){
	cout<<"Add(5,7) : "<<Add(5,7)<<endl;
	cout<<"Add(5.5,7.9) : "<<Add(5.5,7.9)<<endl;//더블형의 템플릿함수 
	string str1 = "abc";
	string str2 = "def";
	cout<<"Add(str1,str2) : "<<Add(str1,str2) <<endl;
} 
