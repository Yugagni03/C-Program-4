#include<iostream>
using namespace std;
int main()
{
	int i , n , sum =0;
	cout<<"enter the num :";
	cin>>n;
	for(i=1;i<=n;i++){
		if(n%i==0){
		sum=sum+i;
		}
		
	}
		cout<<sum<<endl;
	return 0;
}
