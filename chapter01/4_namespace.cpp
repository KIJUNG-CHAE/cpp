#include<iostream>

namespace A_com{
	void function()
	{
		std::cout<<"A.com�� ������ �Լ�"<<std::endl;
	}
}

namespace B_com{
	void function()
	{
		std::cout<<"B.com�� ������ �Լ�"<<std::endl;
	}
}
using namespace A_com;//���� 
int main()
{
	//A_com::function();	A_com�������� std �������� 
	function(); 
	B_com::function();
}
