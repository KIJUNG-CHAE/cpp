#include<iostream>

int BoxVol(int length, int width = 1, int height = 1);//�Լ�������
int main()
{
	std::cout<<"[3,3,3]"<<BoxVol(3,3,3)<<std::endl;
	std::cout<<"[5,5]"<<BoxVol(5,5)<<std::endl;
	std::cout<<"[7]"<<BoxVol(7)<<std::endl;
} 
int BoxVol(int length, int width , int height )//���𹮿��� ����Ʈ�������� 

{
	return length*width*height;
}
