#include<iostream>
void swap(int *a ,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int x= 5;
	int y= 4;
	swap(&x,&y);
	std::cout<<"the value of a wil be :"<<x<< " and the value of b will be :"<<y<<"\n";
	return 0;
}
