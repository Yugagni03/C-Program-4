#include<iostream>
int main()
{
	int vol , side;
	std::cout<<"enter the side of the cube :";
	std::cin>>side;
	
	vol=side*side*side;
	
	std::cout<<"the volume of the cube is :"<<vol;
	
	return 0;
}
