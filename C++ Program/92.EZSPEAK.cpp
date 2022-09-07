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

        string s;
        cin >> s;

        int cnt = 0;
        bool is = true;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
                cnt++;
            else
                cnt = 0;

            if (cnt >= 4)
            {
                is = false;
                break;
            }
        }
        if (is)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}