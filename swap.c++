#include<iostream>
using namespace std;
intmain()
{
	int v1 , v2;
	cout<<"enter the v1:";
	cin>>v1;
	cout<<"enter the v2:";
	cin>>v2;
	v1=v1+v2;
	v2=v1-v2;
	v1=v1-v2;
	cout<<v1<<" "<<v2;
	return 0;
}
