#include <iostream> 

void ex01(); //�Լ� ���� / main �տ��� ����  
void ex02();
void ex03(int num);
int ex04(int num); // ���ϰ��� �����ؼ� �Լ��� ���� �ڷ��� ����  

int main()
{
	ex01(); //�Լ� ȣ�⹮  
	ex02();
	int num;
	std::cout<<" ������ ���� �Է� : ";
	std::cin>>num;
	ex03(num);
	int money;
	std::cout<<" �Ǹűݾ��� �Է��Ͻÿ� : ";
	std::cin>>num;
	money = ex04(num);
	std::cout<<" �޿� : "<<money<<std::endl;
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
	std::cout<<" �̸� : ";
	std::cin>>name;
	std::cout<<" ��ȭ��ȣ : ";
	std::cin>>phonenum;
	std::cout<<name<<" ���� ��ȭ��ȣ�� "<<phonenum<<" �Դϴ�." <<std::endl; 
}
 
void ex01() //�Լ� ���ǹ�  
{
	int a,b,c;
	std::cout<<" ���� �ΰ� �Է�:";
	std::cin>>a>>b;
	c = a + b;
	std::cout<<a<<" + "<<b<<" = "<<c<<std::endl;
}
