#include<iostream>
#include<cstring>
using namespace std;

class Person{
	public:
		Person * GetThis(){ //��ü�� �ּҸ� ã�°�  
			return this;
		}
};
//person���� �ּҸ� �Ҵ�������� ���⶧���� �Ҹ��ڸ� ���ʿ䰡����. 
int main(){
	Person p1;
	cout<<"p1�� �ּ� : "<<&p1<<endl;
	cout<<"p1.getThis"<<p1.GetThis()<<endl;
	
	Person *p2 = new Person();
	cout<<"p2�� �ּ� : "<<p2<<endl; //p2��ü�� �ּ���  
	cout<<"p2->getThis"<<p2->GetThis()<<endl;
	
	delete p2; // �Ҹ��ڴ� ��������� �����Ͱ� ������  
}

//�Ҹ���, �����ʹٽð��� 
