#include<iostream>

int BoxVol(int length, int width = 1, int height = 1);//함수선언만함
int main()
{
	std::cout<<"[3,3,3]"<<BoxVol(3,3,3)<<std::endl;
	std::cout<<"[5,5]"<<BoxVol(5,5)<<std::endl;
	std::cout<<"[7]"<<BoxVol(7)<<std::endl;
} 
int BoxVol(int length, int width , int height )//선언문에만 디폴트값을넣음 

{
	return length*width*height;
}
