#include<iostream>
using namespace std;
int add(int,int,int=0);
int main()
{
	int a,b,c;
	cout<<"Enter Two numbers: ";
	cin>>a>>b;
	cout<<"sum of Two numbers: "<<add(a,b)<<endl;
	cout<<"Enter Three numbers: ";
	cin>>a>>b>>c;
	cout<<"sum of Three numbers: "<<add(a,b,c)<<endl;
}
int add(int x,int y,int z)
{
	return(x+y+z);
}