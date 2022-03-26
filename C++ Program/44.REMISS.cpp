#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int a, b;
        cin >> a >> b;
        int minn = max(a, b);
        int maxx = a+b;
        cout<<minn<<" "<<maxx<<endl;
    }
}