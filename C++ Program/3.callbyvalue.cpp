#include<iostream>
using namespace std;
int sum(int, int);
int main()
{
	int a,b;
	cout<<"Enter Two Numbers: ";
	cin>>a>>b;
	int s= sum(a,b);
	cout<<"Sum: "<<s<<endl;
}
int sum(int x, int y)
{
	return(x+y);
}