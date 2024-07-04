#include<iostream>
using namespace std;
int main()
{
	int num1 , num2 , num3 , num4;
	int sum , avg;
	cout<<"enter the 1st num:";
	cin>>num1;
	cout<<"enter the 2nd num:";
	cin>>num2;
	cout<<"enter the 3rd num:";
	cin>>num3;
	cout<<"enter the 4th num:";
	cin>>num4;
	sum=num1+num2+num3+num4;
	avg=sum/4;
	cout<<"total of these nums :"<<sum<<endl;
	cout<<"average of these nums:"<<avg<<endl;
	return 0;
	
	
}
