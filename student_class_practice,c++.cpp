#include<iostream>
using namespace std;
class student{
	private:
		int roll;
		char name;
		int marks1;
		int marks2;
		int marks3;
	public:
		student(int r, char n , int m1 , int m2, int m3){
			roll=r;
			name=n;
			marks1=m1;
			marks2=m2;
			marks3=m3;
		}
		int total(int m1,int m2, int m3){
		return m1+m2+m3;
		}
		char grade(float avg){
		float avg=total()/3;
		if(avg>60)
		return 'A';
		else if(avg>=40 && avg<60)
		return 'B';
		else
		return 'C';
		}
		
};
int main()
{
	char name;
	int roll;
	int m1 , m2 , m3;
	cout<<"enter the name :";
	cin>>name;
	cout<<"enter the roll :";
	cin>>roll;
	cout<<"enter the marks:";
	cin>>m1>>m2>>m3;
	student s(roll,name,m1,m2,m3);
	cout<<"total :"<<total();
	cout<<"grade:"<<greade();
	return 0;
}
