#include<iostream>
using namespace std;
int main()
{
	string str="welcome";
	int count=0;
	string::itreater it;
	for(it=str.begin();it!=str.end(),it++)
	{
		cout<<count++;
	}
	return 0;
}
