#include<iostream>
#include<fstream>
using namespace std;


int main(){
	char ch;
	char line[100];
	
	ifstream fin;//�ѹ� �����ϸ� �״������� fin.open�� �����
	fin.open("get_file.txt");
	while(fin.get(ch)){
		cout<<ch;
	}
	fin.close();
	cout<<"���پ� �б�"<<endl;

	fin.open("get_file.txt");
	
	while(fin.getline(line,100)){
		cout<<line<<endl;
	}
	fin.close();
	
}
