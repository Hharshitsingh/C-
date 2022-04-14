#include<iostream>
using namespace std;

int sum(int a){
    if(a==1)
        return 1;
    else
        return a+sum(a-1);
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Sum of "<<n<<" is "<<sum(n);
    return 0;
}