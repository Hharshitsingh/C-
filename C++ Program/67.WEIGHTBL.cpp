#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w1, w2, x1, x2, m;
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        int min = x1 * m + w1;
        int max = x2 * m + w1;
        if (w2 >= min && w2 <= max)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}