#include<iostream>
using namespace std;
int main()
{
 int sub1 , sub2 , sub3 , total , avg;
 cout<<"enter the sub 1 :";
 cin>>sub1;
 cout<<"enter the sum 2 :";
 cin>>sub2;
 cout<<"enter the sub 3 :";
 cin>>sub3;
 total= sub1 + sub2 + sub3;
 avg = total/3;
 if(avg >=60)
 {
 	cout<<"GRADE A";
	 }	
	 else if(avg <60){
	 	cout<<"GRADE B";
	 }
	 else if(avg<35)
	 {
	 	cout<<"GRADE C ";
	 }
	 else{
	 cout<<"INVALID !!";
}
	 return 0;
}
