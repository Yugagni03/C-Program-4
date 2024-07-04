  // Write a program to swap two numbers using a 3rd variable
#include<iostream>
int main()
{
	int a , b ,temp;
	std::cout<<"the first num is :";
	std::cin>>a;
	
	std::cout<<"the second num is :";
	std::cin>>b;
	
	a=temp;
	a=b;
	b=temp;
	
	std::cout<<a;
	std::cout<<b;
	
	return 0;
}
