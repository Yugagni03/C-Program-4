#include<iostream>
using namespace std;
int main()
{
	string s="madam";
	for(int i=0;s[i]<4;i++){
		cout<<"the original string is : ";
	}
	cout<<s<<endl;
		for(int i=4;s[i]>0;i--){
		cout<<"the reverse string is : ";
	}
	cout<<s<<endl;
	return 0;
}

