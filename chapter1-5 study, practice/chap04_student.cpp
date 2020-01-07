#include<iostream>
#include<cstring>
using namespace std;

class Student{
	char *name;
	char *major;
	int stdid;
	int grade;
public:
	Student(const char *_name = "", const char *_major = "", const int _stdid = 0, const int _grade = 0){
		name = new char[strlen(_name)+1];
		strcpy(name,_name);
		major = new char[strlen(_major)+1];
		strcpy(major,_major);
		stdid = _stdid;
		grade = _grade;
	}
	~Student(){
		delete []name;
		delete []major;
	}
	void Setname(char *_name){
		name = new char[strlen(_name)+1];
		strcpy(name,_name);
	}
	void Setmajor(char *_major){
		major = new char[strlen(_major)+1];
		strcpy(major,_major);
	}
	void Setstdid(int _stdid){
		stdid = _stdid;
	}
	void Setgrade(int _grade){
		grade = _grade;
	}
	
	char* Getname(){//*쓰는거 틀림 
		return name;
	}
	char* Getmajor(){
		return major;
	}
	int Getstdid(){
		return stdid;
	}
	int Getgrade(){
		return grade;
	}
	void ShowData(){
		cout<<"이름 : "<<name<<endl; 
		cout<<"전공 : "<<major<<endl; 
		cout<<"학번 : "<<stdid<<endl; 
		cout<<"학년 : "<<grade<<endl; 
	}
};



int main(){
	Student std1("기중","컴퓨터공학과",201724596,2); //함수를 쓸때 객체명을 분명히 쓰자. 

	char getline[20];
	int i,getnum;

	cout<<"<현재 정보>"<<endl;
	std1.ShowData();

	while(1){
		cout<<"<메뉴>"<<endl<<"1. 이름변경"<<endl<<"2. 전공변경"<<endl<<"3. 학번변경"<<endl<<"4. 학년변경"<<endl<<"5. 정보조회"<<endl<<"숫자입력 : ";
		cin>>i;
		switch (i){
			case 1 : cout<<"*정보 변경*"<<endl<<"변경할 이름 : ";cin>>getline; std1.Setname(getline); break; 
			case 2 : cout<<"*정보 변경*"<<endl<<"변경할 전공 : ";cin>>getline; std1.Setmajor(getline); break; 
			case 3 : cout<<"*정보 변경*"<<endl<<"변경할 학번 : ";cin>>getnum; std1.Setstdid(getnum); break; 
			case 4 : cout<<"*정보 변경*"<<endl<<"변경할 학년 : ";cin>>getnum; std1.Setgrade(getnum); break; 
			case 5 : cout<<"*정보 조회*"<<endl;std1.ShowData(); break; 
			default : cout<< "다시입력하십시오."<<endl;
		}	
		
	}
		
}














