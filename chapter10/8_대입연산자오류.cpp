#include <iostream>
#include<cstring>
using namespace std;

class Person{
	char* str;
public:
	Person(const char* _str = ""){
		str = new char[strlen(_str)+1];
		strcpy(str,_str);
	}
	Person(const Person& p){
		str = new char[strlen(p.str)+1];
		strcpy(str,p.str);
	}
	~Person(){
		delete []str;//str�� ���ּҸ�ã�ư��� ���������� �ִ� ,�߹��߹� �迭��ȣ�� ��  
	}
	Person& operator=(const Person& p){
		delete []str; //���ڿ����̰��ٸ��Ƿ� ���� �޸𸮰����� ���ְ� ���� �Ҵ� �������. 
		str = new char[strlen(p.str)+1];
		strcpy(str,p.str);
		return *this; 
	}
	friend ostream& operator<<(ostream& os, const Person& p);//&��ӹްڴٴ��ǹ� 
};

ostream& operator<<(ostream& os, const Person& p){
	os << "str:"<<p.str<<endl;
	return os;
}

int main(){
	Person p1("kim");//0x100
	Person p2("choi");//0x200
	cout<<"p1 : "<<p1<<endl;
	cout<<"p2 : "<<p2<<endl;
	p1 = p2;//�ּҸ��� ��  
	cout<<"p1 = p2 �� p1 : "<<p1<<endl;//p1�� �ּҺ��� 0x200 �ּҸ� �Ҿ���� ���� ���Կ����ڸ� ����� ����Ѵ�. 
}
