#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char ch, line[500];
	ifstream fin("article.txt");
	
	if(fin == NULL){
		cout<<"file not found"<<endl;
		return 0;
	}
	while (fin.get(ch)){
		cout<<ch;
	}
	fin.close();
	cout<<"k ���ٴ����� �б�"<<endl;
	fin.open("article.txt");
	while(fin.getline(line,500)){
		cout<<line<<endl;
	}
	fin.close();
}
