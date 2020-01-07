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
	
	char* Getname(){//*���°� Ʋ�� 
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
		cout<<"�̸� : "<<name<<endl; 
		cout<<"���� : "<<major<<endl; 
		cout<<"�й� : "<<stdid<<endl; 
		cout<<"�г� : "<<grade<<endl; 
	}
};



int main(){
	Student std1("����","��ǻ�Ͱ��а�",201724596,2); //�Լ��� ���� ��ü���� �и��� ����. 

	char getline[20];
	int i,getnum;

	cout<<"<���� ����>"<<endl;
	std1.ShowData();

	while(1){
		cout<<"<�޴�>"<<endl<<"1. �̸�����"<<endl<<"2. ��������"<<endl<<"3. �й�����"<<endl<<"4. �г⺯��"<<endl<<"5. ������ȸ"<<endl<<"�����Է� : ";
		cin>>i;
		switch (i){
			case 1 : cout<<"*���� ����*"<<endl<<"������ �̸� : ";cin>>getline; std1.Setname(getline); break; 
			case 2 : cout<<"*���� ����*"<<endl<<"������ ���� : ";cin>>getline; std1.Setmajor(getline); break; 
			case 3 : cout<<"*���� ����*"<<endl<<"������ �й� : ";cin>>getnum; std1.Setstdid(getnum); break; 
			case 4 : cout<<"*���� ����*"<<endl<<"������ �г� : ";cin>>getnum; std1.Setgrade(getnum); break; 
			case 5 : cout<<"*���� ��ȸ*"<<endl;std1.ShowData(); break; 
			default : cout<< "�ٽ��Է��Ͻʽÿ�."<<endl;
		}	
		
	}
		
}














