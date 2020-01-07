#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int count,i,num1,num2;
	char op;
	double result;
	
	ifstream fin("basic.inp");
	ofstream fout("basic.out");
	if(fin==NULL){
		cout<<"file not found"<<endl;
		return 0;		
	}
	fin>>count;
	for(i=1;i<=count;i++){
		fin>>num1>>op>>num2;
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
