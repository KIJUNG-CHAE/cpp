#include<iostream>

namespace A_com{
	void function()
	{
		std::cout<<"A.com에 정의한 함수"<<std::endl;
	}
}

namespace B_com{
	void function()
	{
		std::cout<<"B.com에 정의한 함수"<<std::endl;
	}
}
using namespace A_com;//생략 
int main()
{
	//A_com::function();	A_com생략가능 std 귀찮을때 
	function(); 
	B_com::function();
}
