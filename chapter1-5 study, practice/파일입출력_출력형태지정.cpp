#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main(){
	char name[10];
	unsigned student_id;
	ofstream fout;
	cout<<"name : ";
	cin>>name;
	cout<<"stu_id : ";
	cin>>student_id;
	fout.open("test2.txt");
	fout.width(10);
	fout<<name;
	fout.width(20);
	fout<<student_id;
	fout<<endl;
	fout.close();
	
	fout.open("test2.txt",ios_base::out | ios_base::app);
	fout.fill('1');
	fout<<setw(20)<<"Hello World"<<endl;
	fout.close()	;
}
