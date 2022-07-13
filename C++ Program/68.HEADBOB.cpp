#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'I')
            {
                cout << "INDIAN" << endl;
                flag = 1;
                break;
            }
            else if (a[i] == 'Y')
            {
                cout << "NOT INDIAN" << endl;
                flag = 1;
                break;
            }
            else
            {
                continue;
            }
        }
        if (flag == 0)
        {
            cout << "NOT SURE" << endl;
        }
    }

    return 0;
}