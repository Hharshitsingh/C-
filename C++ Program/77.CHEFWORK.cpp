#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c[n], w[n];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    for (int i = 0; i < n; i++)
        cin >> w[i];

    int t1, t2, t3;
    t1 = t2 = t3 = 100001;
    for (int i = 0; i < n; i++)
    {
        if (w[i] == 1)
        {
            if (c[i] < t1)
            {
                t1 = c[i];
            }
        }
        else if (w[i] == 2)
        {
            if (c[i] < t2)
            {
                t2 = c[i];
            }
        }
        else if (w[i] == 3)
        {
            if (c[i] < t3)
            {
                t3 = c[i];
            }
        }
    }
    if (t1 + t2 < t3)
    {
        cout << t1 + t2 << endl;
    }
    else
    {
        cout << t3 << endl;
    }

    return 0;
}