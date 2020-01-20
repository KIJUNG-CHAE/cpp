#include<iostream>
#include<cstring>
using namespace std;

class AAA{
	char name[20];
public:
	AAA(const char* _name){
		strcpy(name,_name);
		cout<<"new object"<<endl;
	}
	~AAA(){
		cout<<"disapper object"<<endl;
	}
};

int main(){
	AAA a1("nomal object");
	cout<<"before making temp object"<<endl;
	AAA("temp object");//생성되었다가 바로사라짐. 
	cout<<"After making temp object"<<endl;
}
