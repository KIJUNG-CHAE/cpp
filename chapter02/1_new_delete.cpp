#include <iostream>
#define DEBUG 0

using std::cin; using std::cout; using std::endl; 

int main()
{
	int size, i, *arr;
	cout<<" 할당하고자 하는 배열의 크기 : ";
	cin>>size; 
	arr = new int[size]; //원하는 만큼의 메모리를 가질 수 있음
#if DEBUG == 1
	cout<<" DEBUG 모드"<<endl;
	if(arr==NULL)
	{
		cout<<" 메모리 할당 실패"<<endl;
		return -1;
	}
#endif	
	cout<<" 배열 초기화"<<endl;
	for(i = 0;i<size;i++){
		arr[i] = (i+1)*11;
	}
	
	cout<<" 배열 출력"<<endl;
	for(i = 0;i<size;i++){
		//cout<<" arr["<<i<<"] = "<<arr[i]<<endl; //밑에라인과 같음 변수와 포인터로 접근 
		cout<<" *(arr+"<<i<<") = "<<*(arr+i)<<endl;
	}
	cout<<" Heap 영역 해제"<<endl;
	delete []arr;
}
