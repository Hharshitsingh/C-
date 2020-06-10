#include<iostream>
using namespace std;
void sum(int*, int*, int*);
int main()
{
	int a,b,s;
	cout<<"Enter Two Numbers: ";
	cin>>a>>b;
	sum(&a,&b,&s);
	cout<<"Sum: "<<s<<endl;
}
void sum(int *x, int *y, int *z)
{
	*z=*x+*y;
}