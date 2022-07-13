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
        int a[5] = {0};
        for (int i = 0; i < n; i++)
        {
            string str;
            cin >> str;
            if (str == "cakewalk")
                a[0] = 1;
            else if (str == "simple")
                a[1] = 1;
            else if (str == "easy")
                a[2] = 1;
            else if (str == "easy-medium" || str == "medium")
                a[3] = 1;
            else
                a[4] = 1;
        }
        if (a[0] == 1 && a[1] == 1 && a[2] == 1 && a[3] == 1 && a[4] == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}