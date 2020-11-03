#include<iostream>
using namespace std;
int main()
{
    int n,j,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum =0;
    for(i = 0;i<n;i++)
    {
        sum = 0;
        for(j = i;j<n;j++)
        {
            sum+=a[j];
            cout<<sum<<endl;
        }
    }
}