#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = str.length();
        int i = 0, count = 0;
        while (i < n)
        {
            if (str[i] == '0')
            {
                i++;
            }
            else
            {
                count++;
                i++;
                while (i < n && str[i] == '1')
                {
                    i++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}