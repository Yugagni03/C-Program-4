#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str1[]={"harry potter"};
	char str2[]={"beauty of the beast"};
	char str3[]={"potter"};
	cout<<"size is :"<<sizeof(str1)<<endl;
	cout<<"length is :"<<strlen(str1)<<endl;
strcat(str1,str2);
cout<<str1<<endl;
strncat(str1,str2,4);
cout<<str1<<endl;
strcpy(str1,str2);
cout<<str1<<endl;
cout<<strstr(str1,str3);

	return 0;
}
