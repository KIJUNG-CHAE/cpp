#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int num1,num2;
	char op;
	double result;
	
	ifstream fin("report.inp");
	ofstream fout("report.out");
	
	if(fin==NULL){
		cout<<"file not found"<<endl;
		return 0;		
	}
	while(fin>>num1>>op>>num2){//n1opn2가 읽혀질 동안//eof파일이 끝이 아닐동안  
		switch(op)
		{
			case '+': result = num1+num2;break;
			case '-': result = num1-num2;break;
			case '*': result = num1*num2;break;
			case '/': result = (double)num1/num2;break;
		}
		fout<<num1<<" "<<op<<" "<<num2<<" = "<<result<<endl;
		cout<<num1<<" "<<op<<" "<<num2<<" = "<<result<<endl;
	}
	fin.close();
	fout.close();
	
}
