#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[20];
	unsigned std_id;//�� unsign������� unsign int int�� ������  
	ofstream fout;
	cout<<"input name : ";
	cin>>name;
	cout<<"std_id : ";
	cin>>std_id;
	fout.open("output.txt");//������������ ������ ���� ������ ������ ��� ���������
	fout<<name<<" , "<<std_id<<endl;
	fout.close();
	
	fout.open("output.txt", ios_base::out|ios_base::app);//�ٽÿ����� ��� append�� �˷����������� ����������� close�� ���Ұ�� �������. 
	//fout.open("output.txt"); ��带 �������������� ���� ������ �����ȴ� 
	fout<<"Hello World"<<endl;
	fout.close();  
}
