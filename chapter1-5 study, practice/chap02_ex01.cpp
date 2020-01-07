#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int count = 0 ;
	double num1, num2, result;//나누기가 있으므로 더블 사용. 
	char op;
	ifstream fin("basic.inp");
	ofstream fout("basic.out");
	fin>>count;
	if (count <= 0 ){
		cout<<"잘못된 파일 입니다. ";
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
			default : cout<<"잘못된 연산기호이므로 종료.";return -1;
		}
		fout<<result<<endl;
		cout<<result<<endl;
	}
	fin.close();
	fout.close();
	
}
