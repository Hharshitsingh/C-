#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float s, a, b, c;
        cin >> s >> a >> b >> c;
        if (100 * b >= s * (100 + c) && s * (100 + c) >= 100 * a)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}