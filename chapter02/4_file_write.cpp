#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[20];
	unsigned std_id;//왜 unsign을썼는지 unsign int int가 생략됨  
	ofstream fout;
	cout<<"input name : ";
	cin>>name;
	cout<<"std_id : ";
	cin>>std_id;
	fout.open("output.txt");//쓰기전용으로 파일을 열기 때문에 파일이 없어도 상관엊ㅄ다
	fout<<name<<" , "<<std_id<<endl;
	fout.close();
	
	fout.open("output.txt", ios_base::out|ios_base::app);//다시오픈할 경우 append를 알려주지않으면 기존내용삭제 close를 안할경우 상관없음. 
	//fout.open("output.txt"); 모드를 지정하지않으면 기존 내용이 삭제된다 
	fout<<"Hello World"<<endl;
	fout.close();  
}
