#include <iostream> 

void ex01(); //함수 선언문 / main 앞에서 선언  
void ex02();
void ex03(int num);
int ex04(int num); // 리턴값을 생각해서 함수의 리턴 자료형 설정  

int main()
{
	ex01(); //함수 호출문  
	ex02();
	int num;
	std::cout<<" 구구단 숫자 입력 : ";
	std::cin>>num;
	ex03(num);
	int money;
	std::cout<<" 판매금액을 입력하시오 : ";
	std::cin>>num;
	money = ex04(num);
	std::cout<<" 급여 : "<<money<<std::endl;
}

int ex04(int num)
{
	return 50000 + num*0.12;
}

void ex03(int num)
{
	int i = 1;
	for (i;i<10;i++){
		std::cout<<num<<" x "<<i<<" = "<<i*num<<std::endl;
	}
}

void ex02()
{
	char name[20], phonenum[20];
	std::cout<<" 이름 : ";
	std::cin>>name;
	std::cout<<" 전화번호 : ";
	std::cin>>phonenum;
	std::cout<<name<<" 님의 전화번호는 "<<phonenum<<" 입니다." <<std::endl; 
}
 
void ex01() //함수 정의문  
{
	int a,b,c;
	std::cout<<" 정수 두개 입력:";
	std::cin>>a>>b;
	c = a + b;
	std::cout<<a<<" + "<<b<<" = "<<c<<std::endl;
}
