#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char ch;
	char *line;
	ifstream fin;
	fin.open("get_file.txt");
	if(fin == NULL){
		cout<<"������ ������ �����ϴ�.";
		return -1; 
	}
	while( fin.get(ch) ){
		cout<<ch;
	}	
	fin.close();
	
	cout<<"���ٴ����� �б�"<<endl;
	fin.open("get_file.txt");
	
	while(fin>>line){
		cout<<line<<endl;
	}
	fin.close();
}
