#include <iostream>
using namespace std;
int area(int l,int b);
float area(int R);
int main()
{
	int r;
	cout<<"Enter radius of circle: ";
	cin>>r;
	cout<<"Area of circle: "<<area(r)<<endl;
	int l,b;
	cout<<"Enter Lenght breadth of rectangle: ";
	cin>>l>>b;
	cout<<"Area of rectangle: "<<area(l,b)<<endl;
}
float area(int R)
{
	return(3.14*R*R);
}
int area(int l,int b)
{
	return(l*b);
}