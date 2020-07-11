#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1{11, 45, 54, 55, 57, 465}; //capacity = 3
    vector<char> v2(5);                      //5 elements
    vector<int> v3(5, 10);                   //5 elements with each block has 10 value
    vector<string> v4(5, "hello");
    //push elements
     v1.push_back(15);
    //pop elemnts
    // v1.pop_back(); //capicty does'nt effect
    // v1.clear(); //clear array elements
     //iterator
    vector<int>::iterator it=v1.begin();
    v1.insert(it+2,35);
    cout<<v1.capacity()<<endl;  //capicty
    cout<<v1.size()<<endl;         //size
    cout<<v1.at(3)<<endl;           //front(), and back() aslo be used
   
    //subscript operator
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }
}