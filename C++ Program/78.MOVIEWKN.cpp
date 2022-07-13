#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int l[n], r[n];
        for (int i = 0; i < n; i++)
            cin >> l[i];
        for (int i = 0; i < n; i++)
            cin >> r[i];

        int index = 0;
        for (int i = 0; i < n; i++)
        {
            if (l[i] * r[i] > l[index] * r[index])
            {
                index = i;
            }
            else if (l[i] * r[i] == l[index] * r[index])
            {
                if (r[i] > r[index])
                {
                    index = i;
                }
            } 
        }
        cout << index+1 << endl;
    }
    return 0;
}