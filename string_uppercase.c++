#include<iostream>
using namespace std;
int main()
{
	string str="WeLcOmE";
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97 && str[i]<=112){
			str[i]=str[i]-32;
		}
	}
	cout<<str<<endl;
	return 0;
}
