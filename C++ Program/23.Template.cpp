#include<iostream>
using namespace std;
template <class X, class Y>            /*Place holder*/
X big(X x, Y y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main()
{
    cout<<"Big = "<<big(15,54)<<endl;
    cout<<"Big = "<<big(46.74,54.55)<<endl;
}