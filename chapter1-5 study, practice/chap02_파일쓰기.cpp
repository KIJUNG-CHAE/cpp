#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char name[20];
	int std_id;
	
	ofstream fout("output.txt");
	cout<<"이름을 입력: ";
	cin>>name;
	cout<<"학번 입력: ";
	cin>>std_id;
	
	fout<<name<<" , "<<std_id;
	cout<<name<<" , "<<std_id;
	
	fout.close();
	 
} 
