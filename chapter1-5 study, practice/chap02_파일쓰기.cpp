#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char name[20];
	int std_id;
	
	ofstream fout("output.txt");
	cout<<"�̸��� �Է�: ";
	cin>>name;
	cout<<"�й� �Է�: ";
	cin>>std_id;
	
	fout<<name<<" , "<<std_id;
	cout<<name<<" , "<<std_id;
	
	fout.close();
	 
} 
