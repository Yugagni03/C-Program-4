// sum of 1st N natural number using formula [n*(n+1)/2} .
#include<iostream>
using namespace std;
int main()
{
	int num , sum;
	std::cout<<"enter the number :";
	std::cin>>num;
	sum=num*(num+1)/2;
	cout<<"the sum of N  natural number is :"<<sum;
	return 0;
}
