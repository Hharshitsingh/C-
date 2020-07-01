#include<iostream>
int rev(int);
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter Two Number: ";
    cin >> a >> b;
    int apro = a * b;
    int x = rev(a);
    int y = rev(b);
    int xpro = x * y;
    if (apro==xpro)
    {
        cout << "yes";
    }
    else
    {
        cout << "No";
    }
}
int rev(int n)
{
     int rem, re=0 ;
    while(n!=0)
    {
        rem = n % 10;
        re = re * 10 + rem;
        n = n / 10;
    }
    return (re);
}