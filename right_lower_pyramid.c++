#include<iostream>
using namespace std;
int main()
{
	int i , j;
	for(i=5;i>0;i--){
		for(j=0;j<=5;j++){
			if(i<=j){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}cout<<endl;
	}return 0;
}
