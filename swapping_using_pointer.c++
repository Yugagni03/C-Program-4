#include<iostream>
int main()
{
	int num1 , num2 , temp;
	int *ptr1 , *ptr2;
	std::cout<<"enter num1 :";
	std::cin>>num1;
    std::cout<<"enter the num2 :";
    std::cin>>num2;
	ptr1= &num1;
	ptr2= &num2;
	temp= *ptr1;
	*ptr1= *ptr2;
	*ptr2= temp;
	std::cout<<num1<<" "<<num2;
	return 0;
	
}
