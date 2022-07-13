#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        while (n > 0)
        {
            int s = floor(sqrt(n));
            count++;
            n = n - (s * s);
        }
        cout << count << endl;
    }
    return 0;
}