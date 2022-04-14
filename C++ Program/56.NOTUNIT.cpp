#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a % 2 == 0)
        {
            if (b - a >= 2)
            {
                cout << a << ' ' << a + 2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            if (b - a >= 3)
            {
                if (a % 3 == 0)
                {
                    cout << a << ' ' << a + 3 << endl;
                }
                else
                {
                    cout << a + 1 << ' ' << a + 3 << endl;
                }
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}

// https://www.slothcoders.com/category/codechef/

// https://www.youtube.com/channel/UCkb5VkQVJ2sbMVBc171De3w