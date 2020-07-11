#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> customer {{100, "c1"}, {200, "c2"}, {300, "c3"}, {400, "c4"}, {500, "c5"}};
    /*customer[100] = "c1";
    customer[200] = "c2";
    customer[300] = "c3";
    customer[400] = "c4";
    customer[500] = "c5";*/
    //check empty status
    cout<<customer.empty()<<endl;
    //insert new elements
    customer.insert(pair<int,string>(600,"c6"));
    //iterator
    map<int, string>::iterator p = customer.begin();
    while (p != customer.end())
    {
        cout << p->first << "\t" << p->second << endl;
        p++;
    }

}