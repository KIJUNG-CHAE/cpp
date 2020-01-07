#include <iostream>

using namespace std; //�Լ� �����ε��� �̿��Ͽ� swap �Լ� �ۼ�  

void swap(int* num1,int* num2);
void swap(char* ch1,char* ch2); //������ �ڷ����� �� ���� �ؾ��� 
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
