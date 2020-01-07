#include<iostream>
#include<cstring>
#include<fstream>
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
	
	char* Getname(){
		return name;//*쓰는거 틀림 
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

Student *stu[100];
int index = 0;
void menuStu();
void newStu();
void allStu();
void modstu();
void deleteStu();

int main(){
	int choice; 

	while(1){
		menuStu();//void menuStu();
		cin>>choice;
		if(choice == 0){
			deleteStu();
			
		}
		switch (choice){
			case 1: newStu(); break;//case 1: newStu; break;
			case 2: allStu(); break;
			case 3: modstu(); break;
			case 4: deleteStu(); break;
			default :return -1;
		}
	}
}

void menuStu(){
	cout<<endl<<"<메뉴>"<<endl<<"1. 데이터 생성"<<endl<<"2. 학생 조회"<<endl<<"3. 학생정보 변경"<<endl<<"4. 학생정보 삭제"<<endl<<"숫자입력 : ";
}

void newStu(){
	char name[20], major[20];
	int stdid, grade;
	ofstream fout("student.txt", ios_base::out | ios_base::app);
	
	cout<<"이름 : ";
	cin>>name; 
	cout<<"전공 : ";
	cin>>major; 
	cout<<"학번 : ";
	cin>>stdid; 
	cout<<"학년 : ";
	cin>>grade;
	
	stu[index] = new Student(name,major,stdid,grade);//
	
	fout<<stu[index]->Getname()<<endl;//std[index]->name
	fout<<stu[index]->Getmajor()<<endl;
	fout<<stu[index]->Getstdid()<<endl;
	fout<<stu[index]->Getgrade()<<endl;
	
	fout.close();
	
	index ++;
	
}

void allStu(){
	int i;
	for(i=0;i<index;i++){
		cout<<endl;
		cout<<"Index : "<<i<<endl;
		stu[i]->ShowData();//cout<<stu[i]->ShowData()<<endl;
	}
}

void modstu(){	
	char getline[20];
	int i,ch,getnum;
	ofstream fout("student.txt"); //
	cout<<"변경하고 싶은 인덱스 : ";
	cin>>i;
	while(ch != 0){
		cout<<"<항목>"<<endl<<"1. 이름변경"<<endl<<"2. 전공변경"<<endl<<"3. 학번변경"<<endl<<"4. 학년변경"<<endl<<"숫자입력 : ";
		cin>>ch;
		
		switch (ch){
				case 1 : cout<<"*정보 변경*"<<endl<<"변경할 이름 : ";cin>>getline; stu[i]->Setname(getline); break;
				case 2 : cout<<"*정보 변경*"<<endl<<"변경할 전공 : ";cin>>getline; stu[i]->Setmajor(getline); break; 
				case 3 : cout<<"*정보 변경*"<<endl<<"변경할 학번 : ";cin>>getnum; stu[i]->Setstdid(getnum); break; 
				case 4 : cout<<"*정보 변경*"<<endl<<"변경할 학년 : ";cin>>getnum; stu[i]->Setgrade(getnum); break; 
				default : cout<<"input error";//return -1;
			}
			
	}

	for(int j = 0; j < index ; j++ ){	//for(j=0;j<index;j++){
		fout<<stu[j]->Getname()<<endl;//fout<<stu[index]->Getname()<<endl; //std[index]->name
		fout<<stu[j]->Getmajor()<<endl;
		fout<<stu[j]->Getstdid()<<endl;
		fout<<stu[j]->Getgrade()<<endl;
	}
	fout.close();
}

void deleteStu(){
	for(int i =0;i<index;i++){
		delete stu[i];
	}
	ofstream fout("student.txt");
	fout.close();
}

