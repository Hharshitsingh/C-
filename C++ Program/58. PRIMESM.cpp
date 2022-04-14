#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long a, b;
        cin >> a >> b;

        int v = abs(b - a);
        if (v % 2 == 0 || b % a == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}
