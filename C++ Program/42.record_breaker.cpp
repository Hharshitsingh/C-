#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n+1];
    a[n]=-1;
    for(i =0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    int ans =0;
    int mx = -1;
    for(i=0;i<n;i++)
    {
        if(a[i]>mx && a[i]>a[i+1])
        {
            ans++;
        }
        mx= (mx>a[i])?mx:a[i];
    }
    cout<<ans;
    return 0;
}