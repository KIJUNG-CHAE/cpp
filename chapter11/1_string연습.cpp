#include<iostream>
#include<cstring>
using namespace std;

class String{
	int len;
	char* str;
public:
	String(const char* _str = NULL);
	String(const String &s);
	~String();
	String operator+(const String& s);
	bool operator==(const String& s);
	String& operator+=(const String& s);
	String& operator=(const String& s);
	friend ostream& operator<<(ostream& os,const String& s);
	friend istream& operator>>(istream& is,String& s);	//const를 쓰지말자  
};

String::String(const char* _str){
	len =(_str ==NULL)? 1:strlen(_str)+1;
	str = new char[len];
	if(_str!=NULL){
		strcpy(str,_str);
	}
}
String::String(const String &s){
	
}
String::~String(){
	
}
String String::operator+(const String& s){//주의  
	char* tstr;
	tstr = new char[s.len + len - 1];
	strcpy(tstr,str);
	strcat(tstr,s.str);
	String temp(tstr);
	delete []tstr;
	return temp;
} 
String& String::operator+=(const String& s){
	char* tstr;
	tstr = new char[s.len + len - 1];
	strcpy(tstr,str);
	strcat(tstr,s.str);
	delete []str;
	str = tstr;
	len = s.len + len - 1;
	return *this;//작업  
	
}
bool String::operator==(const String& s){
	return (strcmp(str,s.str)? false:true);
}
String& String::operator=(const String& s){
	delete []str;
	len = s.len;
	str = new char[len];
	
	strcpy(str,s.str);
	return *this;
}
ostream& operator<<(ostream& os,const String& s){//주의  
	os<<s.str<<"len : "<<s.len<<endl;
	return os;//다른출력물에 연결하여 출력할 수있다. 
}
istream& operator>>(istream& is,String& s){//키보드에서 값을 받아서 넣을 때  입력받을공간이잇어야함 포인터 x 
	char temp[100];
	is>>temp;
	s = String(temp);
	return is;
	
}

int main(){
	String str1("Good");
	cout<<"str1 : "<<str1<<endl; 
	String str2 = "Morning";
	cout<<"str2 : "<<str2<<endl; 
	String str3 = str1 +str2;
	cout<<"str3 = str1 + str2 -> str3 : "<<str3<<endl;
	
	str1 += str2;
	cout<<"str1 += str2"<<endl;

//	str1 +=str2 +=str3;                           
//	 cout<<"str1 += str2 -> str1 : "<<str1<<endl;
	cout<<"str1과 str3는 ";
	if(str1 ==str3){
		cout<<"equal"<<endl;
	}
	else cout<<"not equal"<<endl;
	str1 = str3 = str2;
	cout<<"str1 = str3 = str2 - >str1 : "<<str1<<endl;
	
	String str4;
	cout<<"input string:";
	cin>>str4;
	cout<<"str4 :"<<str4<<endl;
}















