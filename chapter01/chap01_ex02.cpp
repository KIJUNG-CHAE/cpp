#include <iostream>

using namespace std; //함수 오버로딩을 이용하여 swap 함수 작성  

void swap(int* num1,int* num2);
void swap(char* ch1,char* ch2); //변수의 자료형을 잘 생각 해야함 
void swap(double& d1,double& d2);

int main()
{
	int num1 = 20, num2 = 30;
	cout<<"Before change num1 : "<<num1<<" , num2 = "<<num2<<endl;
	swap(&num1,&num2);
	cout<<"After  change num1 : "<<num1<<" , num2 = "<<num2<<endl;
	
	char ch1 = 'a', ch2 = 'f';
	cout<<"Before change ch1 : "<<ch1<<" , ch2 = "<<ch2<<endl;
	swap(&ch1,&ch2);
	cout<<"After  change ch1 : "<<ch1<<" , ch2 = "<<ch2<<endl;
	
	double db1 = 5.7, db2 = 7.8;
	cout<<"Before change db1 : "<<db1<<" , db2 = "<<db2<<endl;
	swap(db1,db2);
	cout<<"After  change db1 : "<<db1<<" , db2 = "<<db2<<endl;
}

void swap(double& d1,double& d2)
{
	double temp;
	temp = d1;
	d1 = d2;
	d2 =temp;
}

void swap(int* num1,int* num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void swap(char* num1,char* num2)
{
	char temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
