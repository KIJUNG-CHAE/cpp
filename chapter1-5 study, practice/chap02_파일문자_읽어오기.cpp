#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char ch;
	char *line;
	ifstream fin;
	fin.open("get_file.txt");
	if(fin == NULL){
		cout<<"파일의 내용이 없습니다.";
		return -1; 
	}
	while( fin.get(ch) ){
		cout<<ch;
	}	
	fin.close();
	
	cout<<"한줄단위로 읽기"<<endl;
	fin.open("get_file.txt");
	
	while(fin>>line){
		cout<<line<<endl;
	}
	fin.close();
}
