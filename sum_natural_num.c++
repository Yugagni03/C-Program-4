#include<iostream>
using namespace std;
int main()
{
	int i , n , sum=0;
	cout<<"enter the range of natural number :";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<sum<<endl;
	return 0;
}
