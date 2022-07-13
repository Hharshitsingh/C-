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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int c_s = 0;
            int c_p = 1;
            for (int j = i; j < n; j++)
            {
                c_s += a[j];
                c_p *= a[j];
                if (c_s == c_p)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}