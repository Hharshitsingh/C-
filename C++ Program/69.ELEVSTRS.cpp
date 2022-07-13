#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, v1, v2;
        cin >> n >> v1 >> v2;
        double ds = (sqrt(2) * n);
        double de = (2 * n);

        if (ds / v1 < de / v2)
        {
            cout << "Stairs" << endl;
        }
        else
        {
            cout << "Elevator" << endl;
        }
    }
    return 0;
}