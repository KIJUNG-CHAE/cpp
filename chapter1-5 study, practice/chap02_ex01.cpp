#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int count = 0 ;
	double num1, num2, result;//�����Ⱑ �����Ƿ� ���� ���. 
	char op;
	ifstream fin("basic.inp");
	ofstream fout("basic.out");
	fin>>count;
	if (count <= 0 ){
		cout<<"�߸��� ���� �Դϴ�. ";
		return -1; 
	}
	for(int i = 0; i<count;i++){
		fin>>op;
		fin>>num1>>num2;
		switch (op)
		{
			case '+' : result = num1+num2; break;
			case '-' : result = num1-num2; break;
			case '*' : result = num1*num2; break;
			case '/' : result = num1/num2; break;
			default : cout<<"�߸��� �����ȣ�̹Ƿ� ����.";return -1;
		}
		fout<<result<<endl;
		cout<<result<<endl;
	}
	fin.close();
	fout.close();
	
}
