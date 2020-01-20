#include<iostream>
#include<cstring>
using namespace std;

class String{
	int len;
	char* str;
public:
	String(const char* _str = NULL){
		len = (_str!=NULL ? strlen(_str)+1:1);//len = (_str!=NULL ? strlen(_str)+1:1)
		str = new char[len];//str = new char[strlen(len)];
		if(_str!=NULL){
			strcpy(str,_str);
		}
	}
	String(const String& s){
		len = s.len;
		str = new char[len];
		strcpy(str,s.str);
	}
	~String(){
		delete []str;
	}
	String operator+(const String& s){//왜 포인터로 받아야함? 
//		String temp;
//		temp.len = len + s.len-1;
//		temp.str = new char[temp.len];
//		strcpy(temp.str,str);
//		strcat(temp.str,s.str);
//		return temp;
		char* tstr;
		tstr = new char[len + s.len-1];
		strcpy(tstr,str);
		strcat(tstr,s.str);
		String temp(tstr);
		delete []tstr;
		return temp;
	}
	String& operator+=(const String& s){//이것도 포인터로받음. 
		char* tstr;
		tstr = new char[len + s.len -1 ];
		strcpy(tstr,str);
		strcat(tstr,s.str);
		delete []str;
		str = tstr; // strcpy(str,tstr); str의 heap영역을 삭제했기때문에 이렇게 주면안됨. 
		len = len+s.len -1;
//		String temp(str);
//		delete []str;
//		len = len+ s.len -1;
//		str = new char[len];
//		strcpy(str,temp.str);
//		strcat(str,s.str);
//		return *this;
	}
	bool operator==(const String& s){//bool const String& operator==(const String& s){
		return (strcmp(str,s.str)? false:true);
	}
	String& operator=(const String& s){
//		String temp(str);
		delete []str;
		len = s.len ;
		str = new char[len];
		strcpy(str,s.str);
		return *this;
	}
	friend ostream& operator<<(ostream& os, const String& s);
	friend istream& operator>>(istream& is, String& s);
};

ostream& operator<<(ostream& os, const String& s){//friend ostream& operator<<(ostream& os, const String& s){
	os<<s.str<<" len : "<<s.len<<endl;//os<<s<<endl;
	return os;
}
istream& operator>>(istream& is, String& s){//friend istream& operator>>(istream& is, String& s){
	char temp[100];
	is>>temp;
	s = String(temp);
//	s.len = strlen(temp)+1;
//	s.str = new char[s.len];
//	strcpy(s.str,temp);
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
	cout<<"str1 += str2 -> str1 : "<<str1<<str2<<endl;

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

