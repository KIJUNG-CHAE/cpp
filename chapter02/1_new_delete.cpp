#include <iostream>
#define DEBUG 0

using std::cin; using std::cout; using std::endl; 

int main()
{
	int size, i, *arr;
	cout<<" �Ҵ��ϰ��� �ϴ� �迭�� ũ�� : ";
	cin>>size; 
	arr = new int[size]; //���ϴ� ��ŭ�� �޸𸮸� ���� �� ����
#if DEBUG == 1
	cout<<" DEBUG ���"<<endl;
	if(arr==NULL)
	{
		cout<<" �޸� �Ҵ� ����"<<endl;
		return -1;
	}
#endif	
	cout<<" �迭 �ʱ�ȭ"<<endl;
	for(i = 0;i<size;i++){
		arr[i] = (i+1)*11;
	}
	
	cout<<" �迭 ���"<<endl;
	for(i = 0;i<size;i++){
		//cout<<" arr["<<i<<"] = "<<arr[i]<<endl; //�ؿ����ΰ� ���� ������ �����ͷ� ���� 
		cout<<" *(arr+"<<i<<") = "<<*(arr+i)<<endl;
	}
	cout<<" Heap ���� ����"<<endl;
	delete []arr;
}
