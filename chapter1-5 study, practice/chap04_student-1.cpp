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
		return name;//*���°� Ʋ�� 
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
	cout<<endl<<"<�޴�>"<<endl<<"1. ������ ����"<<endl<<"2. �л� ��ȸ"<<endl<<"3. �л����� ����"<<endl<<"4. �л����� ����"<<endl<<"�����Է� : ";
}

void newStu(){
	char name[20], major[20];
	int stdid, grade;
	ofstream fout("student.txt", ios_base::out | ios_base::app);
	
	cout<<"�̸� : ";
	cin>>name; 
	cout<<"���� : ";
	cin>>major; 
	cout<<"�й� : ";
	cin>>stdid; 
	cout<<"�г� : ";
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
	cout<<"�����ϰ� ���� �ε��� : ";
	cin>>i;
	while(ch != 0){
		cout<<"<�׸�>"<<endl<<"1. �̸�����"<<endl<<"2. ��������"<<endl<<"3. �й�����"<<endl<<"4. �г⺯��"<<endl<<"�����Է� : ";
		cin>>ch;
		
		switch (ch){
				case 1 : cout<<"*���� ����*"<<endl<<"������ �̸� : ";cin>>getline; stu[i]->Setname(getline); break;
				case 2 : cout<<"*���� ����*"<<endl<<"������ ���� : ";cin>>getline; stu[i]->Setmajor(getline); break; 
				case 3 : cout<<"*���� ����*"<<endl<<"������ �й� : ";cin>>getnum; stu[i]->Setstdid(getnum); break; 
				case 4 : cout<<"*���� ����*"<<endl<<"������ �г� : ";cin>>getnum; stu[i]->Setgrade(getnum); break; 
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

