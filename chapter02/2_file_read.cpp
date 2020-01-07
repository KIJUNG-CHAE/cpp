#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char name[20];
	int ID;
	ifstream fin;
	fin.open("test.txt");
	fin>>name>>ID;
	cout<<"name : "<<name<<", ÇÐ¹ø : "<<ID<<endl;
	fin.close();
	ofstream fout;
	fout.open("test.txt");
	cout<<"Input new name : ";
	cin>>name;
	cout<<"Input new ID : ";
	cin>>ID;
	fout<<name<<endl<<ID<<endl;
	fout.close();
}
