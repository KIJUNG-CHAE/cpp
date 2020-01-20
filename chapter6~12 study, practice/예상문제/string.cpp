#include<iostream>
#include<cstring>
using namespace std;

class String{
	char* str;
	int len;
public:
	String(const char* _str = NULL){
		len = ((_str != NULL)? strlen(_str)+1:1);
		str = new char[len];
		if(_str != NULL){
			strcpy(str,_str);
		}
	}
	String operator+(const String& s){
		char* tstr;						//틀린곳  
		tstr = new char[len + s.len -1];
		strcpy(tstr,str);
		strcat(tstr,s.str);
		String temp(tstr);
		delete []tstr;
		return temp;
	}
	String& operator+=(const String& s){
		char* tstr;
		tstr = new char[len + s.len -1];
		strcpy(tstr,str);
		strcat(tstr,s.str);
		delete []str;
		str = tstr;
		len = len + s.len -1;
		return *this;
	}
	String& operator=(const String& s){
		delete []str;
		len = s.len;
		str = new char[len+1];
		strcpy(str,s.str);
		return *this;
	}
	bool operator==(const String& s){
		return ((strcmp(str,s.str)) ? false:true);
	}
	friend ostream& operator<<(ostream& os,const String& s);
	friend istream& operator>>(istream& is,String& s);
};
ostream& operator<<(ostream& os,const String& s){
	os<<s.str<<" len : "<<s.len<<endl;
	return os;
}
istream& operator>>(istream& is,String& s){
	char temp[100];				//틀릿곳  
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
	cout<<"str1 += str2 -> str1 : "<<str1<<endl;
	
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




