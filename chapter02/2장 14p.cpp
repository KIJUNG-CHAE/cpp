#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<" �Ҵ��ϰ����ϴ� �迭�� ũ�� : ";
	cin>>size;
	int* arr = new int[size];
	
	for(int i=0; i<size;i++) arr[i]=i+10;
	
	for(int j=0;j<size;j++) cout<<"arr["<<j<<"]="<<arr[j]<<endl;
	delete []arr;
	return 0;
}
