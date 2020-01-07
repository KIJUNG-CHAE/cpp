#include<iostream>
#include<cstring>
using namespace std;

class Copy{
	char* string;
	int num;
public:
	Copy(const char* _string = "", const int _num= 0);
	Copy(const Copy &str1);
	~Copy(){
		delete []string;
	}
	
	void ShowData(){
		GetThis();
		cout<<"string : "<<string<<endl;
		cout<<"num : "<<num<<endl<<endl;
	}
	void GetThis(){
		cout<<"현재 주소 : "<<this<<endl;
	} 
};

Copy function(){
	Copy _str("funtion()",20);
	_str.ShowData();
	return _str;
}

void function2(Copy a){
	a.ShowData();
}

Copy::Copy(const char *_string, const int _num){
	cout<<"생성자 호출"<<endl;
	string = new char [strlen(_string)+1];
	strcpy(string,_string);
	num = _num;
}

Copy::Copy(const Copy &str1){
	cout<<"복사 생성자 호출"<<endl;
	string = new char [strlen(str1.string)+1];
	strcpy(string,str1.string);
	num = str1.num;
 
}

int main(){
	Copy str1("main",500);
	str1.ShowData();
	
	Copy str2(str1);
	str2.ShowData();
	
	Copy str4("function2",500);
	function2(str4);
	
	function().ShowData();
	
	}




