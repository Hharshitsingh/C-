#include<iostream>
using namespace std;
int main()
{
    int a[4];
    for (int i=0; i<4; i++)
        cin >> a[i];
    for (int i=0; i<3; i++){
        if(a[i]==a[3]){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}   