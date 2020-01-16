#include<iostream>
#include<cstring>
using namespace std;

template<typename T>
int SizeOf(T a){
	return sizeof(a);
} 

template<> //함수의 특수화  //특별한함수를만드는것 함수의 특수화 
int SizeOf(const char* a){
	return strlen(a);
} 

int main(){
	int i = 10;
	double e = 7.7;
	const char* str = "good morning";
	char name[20] = "chae";
	cout<<"sizeof(i) : "<<SizeOf(i)<<endl;
	cout<<"sizeof(e) : "<<SizeOf(e)<<endl;
	cout<<"sizeof(str) : "<<SizeOf(str)<<endl;//어떤자료형의 포인터변수의 사이즈 는 8이다  
	cout<<"sizeof(name) : "<<SizeOf(name)<<endl; 
	
} 
