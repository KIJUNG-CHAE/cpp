#include<iostream>
#include<cstring> 
using namespace std;

class Country{
	char japen[20];
	char china[20];
public:
	Country(const char* _japen = "", const char* _china = ""){
		strcpy(japen,_japen);
		strcpy(china,_china);
	}
	char* Getjapen(){
		return japen;
	}
	char* Getchina(){
		return china;
	}
};

class My:public Country{
	char korea[20];
public:
	My(const char* _korea = ""){
		strcpy(korea,_korea);
	}
	My(const char* _japen,const char* _china, const char* _korea):Country(_japen,_china){//public Country(_japen,_china){
		//		strcpy(japen,_japen);
		//		strcpy(china,_china);
		strcpy(korea,_korea);
	}
	char* Getkorea(){
		return korea;
	}
	void ShowData(){
		cout<<"japen : "<< Getjapen()<<endl;
		cout<<"china : "<< Getchina()<<endl;
		cout<<"korea : "<< korea<<endl;
	}
};

int main(){
	My no1("ºÒ°í±â");
	no1.ShowData();
	
	My no2("¶ó¸à","Â¥Àå¸é","±èÄ¡Âî°³") ;
	no2.ShowData();
}
