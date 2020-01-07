#include<iostream>
#include<cstring>
using namespace std;

class NameCard{
	char *name;
	char *phone;
	char *url;
	char *pos;
public:
	NameCard(const char *_name = "", const char *_phone = "",
			 const char *_url = "", const char *_pos = "")
	{
	 	name = new char[strlen(_name)+1];
	 	strcpy(name,_name);
	 	phone = new char[strlen(_phone)+1];
	 	strcpy(phone,_phone);
	 	url = new char[strlen(_url)+1];
	 	strcpy(url,_url);
	 	pos = new char[strlen(_pos)+1];
	 	strcpy(pos,_pos);
	}
	~NameCard(){
		delete[] name;
		delete[] phone;
		delete[] url;
		delete[] pos;
	}
	
	void ShowData(){
		cout<<"1. �̸� : "<<name<<endl; //�ּҸ� cout�� ������� �޸𸮰� ������ �������. 
		cout<<"2. ��ȭ��ȣ : "<<phone<<endl; 
		cout<<"3. �ּ� : "<<url<<endl;
		cout<<"4. ���� : "<<pos<<endl;
	} 
};

int main(){
	NameCard mine("chae","010.1111.1111","www","stud");
	mine.ShowData();
}
