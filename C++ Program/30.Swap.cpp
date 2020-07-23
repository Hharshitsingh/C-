/*2.Write a program to swap the values of two variables without using any extra
variable.*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Two Numbers"<<endl;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After Swap"<<endl;
    cout<<"a = "<<a<<"\t b = "<<b<<endl;
}
