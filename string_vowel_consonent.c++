#include<iostream>
using namespace std;
int main()
{
	string ab="this a toy";
	int vowel=0, consonent =0, space=0;
	for(int i=0;ab[i]!='\0';i++)
	{
		if(ab[i]=='a' ||ab[i]=='e' || ab[i]=='i' || ab[i]=='o' ||ab[i]=='u'){
			vowel++;
		}
		else if(ab[i]==' '){
			space++;
		}
		else{
			consonent++;
		}
	}
	cout<<"vowel :"<<vowel;
	cout<<"consonent :"<<consonent;
	cout<<"space:"<<space;
	return 0;
}
