#include<iostream>
int main()
{
	int i, n , j, n2 , sum2=0 , sum=0 ;
	std::cout<<"enter the heighest value :";
	std::cin>>n;
	
	for(i=1 ; i<=n ; i=i+2)
	{
		sum=sum+i;
	}
	std::cout<<"enter the heighest value for 2nd type of program :";
	std::cin>>n2;
	
	for(j=0 ; j<=n2 ; j=j+2)
	{
	sum2=sum2+j;
}
	std::cout<<"the sum of odd numbers is :"<<sum<<"\n";
	std::cout<<"the sum of even numbers is :"<<sum2<<"\n";
	return 0;
	
}
