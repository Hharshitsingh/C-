// Compare two array and find same elements in array
#include <iostream>
using namespace std;
int main()
{
    int a[50] = {};
    int b[50] = {};
    int elm, i, j;
    cout << "How many elemnts you want to enter: ";
    cin >> elm;
    cout << "Enter Elements of 1st array: ";
    for (i = 0; i < elm; i++)
    {
        cin >> a[i];
    }
    cout << "Enter Elements of 2nd array: ";
    for (j = 0; j < elm; j++)
    {
        cin >> b[j];
    }
    cout << "List of same Elements: " << endl;
    for (i = 0; i < elm; i++)
    {
        for (j = 0; j < elm; j++)
        {
            // num = a[i];
            if (a[i] == b[j])
            {
                cout << b[j] << endl;
            }
        }
    }
}