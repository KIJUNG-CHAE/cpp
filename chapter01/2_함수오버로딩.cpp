#include<iostream>
int function()
{
	return 10;
}
int function(int a, int b)
{
	return a+b;
}
double function(double a, double b)
{
	return a+b;
}
int main()
{
	std::cout<<function()<<std::endl;
	std::cout<<function(12,13)<<std::endl;
	std::cout<<function(12.7,18.1)<<std::endl;
}
