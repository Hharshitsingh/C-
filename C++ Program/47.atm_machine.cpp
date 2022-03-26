#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,k;
        cin >> n >> m;
        while(n--){
            cin >>k;
            if(k<=m){
                m-=k;
                cout<<1;
            }
            else
                cout << 0;
        }
        cout << endl;
    }

}