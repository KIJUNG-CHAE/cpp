#include<stdio.h>
#include<iostream>
namespace mystd
{
	const char* endl="\n";
	class ostream{
	public:
		ostream(){
			printf("%s","������ ȣ��\n");
		}
		ostream(const ostream& os){
			printf("%s","���� ������ ȣ��\n");
		}
		ostream operator<<(const char*str){
			printf("%s",str);
			return *this;
		}
		ostream operator<<(int i){
			printf("%d",i);
			return *this;
		}
		ostream operator<<(double i){
			printf("%e",i);
			return *this;
		}
	};
	ostream cout;
}

using mystd::cout;
using mystd::endl;

int main(){
	cout<<"HelloWorld"<<endl<<3.14<<endl;
	return 0;
} 
