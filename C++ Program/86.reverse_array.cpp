#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n] ;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int start = 0, end = n-1, temp;
    while (start < end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    // cout<<"hello";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}