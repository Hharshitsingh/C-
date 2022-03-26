#include <iostream>
using namespace std;
int main()
{
    int t, x, y, a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> a >> b;
        if (x == a && y == b || x == b && y == a)
            cout <<"0"<<endl;
        else if (x == a || x == b || y == a || y == b)
            cout <<"1"<<endl;
        else
            cout <<"2"<<endl;
    }
}