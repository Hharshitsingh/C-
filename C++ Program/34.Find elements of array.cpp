// Program to find element in array
#include <iostream>
using namespace std;
int main()
{
    int a[50] = {};
    int count = 0, i, elm;
    cout << "How many elemnts you want to enter: ";
    cin >> elm;
    cout << "Enter " << elm << " Elements of Array: ";
    for (i = 0; i < elm; i++)
    {
        cin >> a[i];
    }
    cout << "Enter Element you want to find in array: ";
    int num;
    cin >> num;
    cout << num << " Present at" << endl;
    for (i = 0; i < elm; i++)
    {
        if (num == a[i])
        {
            cout << "Index No.: " << i << ", Postion No.: " << i + 1 << endl;
            count++;
        }
    }
    cout << num << " in array " << count << " Times" << endl;
}