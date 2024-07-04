#include<iostream>
using namespace std;
int search(int arr[] , int n , int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return 0;
}
int main()
{
	int n,i;
	cout<<"enter the size of an array:";
	cin>>n;
	int a[n];
	cout<<"enter the array:";
	cin>>a[i];
	int key;
	cout<<"enter the key:";
	cin>>key;
	int index=search(a[i],n,key);
	return 0;
}

