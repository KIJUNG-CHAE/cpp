#include<iostream>
#include<fstream>
using namespace std;


int main(){
	char ch;
	char line[100];
	
	ifstream fin;//한번 선언하면 그다음부터 fin.open을 쓰면됨
	fin.open("get_file.txt");
	while(fin.get(ch)){
		cout<<ch;
	}
	fin.close();
	cout<<"한줄씩 읽기"<<endl;

	fin.open("get_file.txt");
	
	while(fin.getline(line,100)){
		cout<<line<<endl;
	}
	fin.close();
	
}
