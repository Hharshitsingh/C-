#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int bag = 0;
        if ((a + b + c) <= d)
        {
            bag = 1;
        }
        else if ((a + b) <= d || (a + c) <= d || (b + c) <= d)
        {
            bag = 2;
        }
        else
        {
            bag = 3;
        }
        cout << bag << endl;
    }
    return 0;
}