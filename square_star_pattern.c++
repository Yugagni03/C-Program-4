#include<iostream>
int main()
{
 int i,j,row,column;
 std::cout<<"enter the number of rows :";
 std::cin>>row;
 
 std::cout<<"enter the number of columns :";
 std::cin>>column;
 
 for(i=1;i<=row;i++)
 {
 	for(j=1;j<=column;j++)
	 {
 		std::cout<<"*";
	 }
	 std::cout<<"\n";
 }
 return 0;
}
