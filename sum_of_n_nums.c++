   // Find the sum of all the natural numbers from 1 to n
#include<iostream>
int main()
{
	int i, n , sum=0 ;
	std::cout<<"enter the value of n :";
	std::cin>>n;
	
	for(i=1; i<=n; i++)
	{
		sum=sum+i;
		std::cout<<sum;
		std::cout<<"\n";
	}
	return 0;
}
