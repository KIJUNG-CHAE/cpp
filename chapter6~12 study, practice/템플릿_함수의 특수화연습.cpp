#include<iostream>
#include<cstring>
using namespace std;

template <typename T>
int SizeOf(T val){//T SizeOf(T val){
	return sizeof(val);
}
template<>
int SizeOf(const char* val){
	return strlen(val);
}


int main(){
	int i = 10;
	double e = 7.7;
	const char* str = "good morning";
	char name[20] = "chae";
	cout<<"sizeof(i) : "<<SizeOf(i)<<endl;
	cout<<"sizeof(e) : "<<SizeOf(e)<<endl;
	cout<<"sizeof(str) : "<<SizeOf(str)<<endl;//��ڷ����� �����ͺ����� ������ �� 8�̴�  
	cout<<"sizeof(name) : "<<SizeOf(name)<<endl; 
	
} 
