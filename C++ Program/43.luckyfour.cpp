#include <iostream>
using namespace std;
int main()
{
    // your code goes here
    int t;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++){
        cin >> a[i];
    }
    for (int i = 0; i < t; i++)
    {
        int count = 0;
        for (int j = a[i]; j > 0;)
        {
            if (j % 10 == 4)
            {
                count = count + 1;
            }
            j = j / 10;
        }
        cout << count << endl;
    }
    return 0;
}