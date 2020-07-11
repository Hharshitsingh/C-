#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> l1{51,225,33,52,758,47,44,285};
    list<string> l2{ "in","kat","isla","dha"};
    //push function
    // l2.push_back("pun");
    // l2.push_front("del");

    //pop function
    // l2.pop_back();
    // l2.pop_front();

    //sort function
    // l1.sort();
    // l2.sort();

    //reverse function
    // l1.reverse();

    //remove
    // l1.remove(44);

    //clear
    l1.clear();
    

    //list print using iterator because only start with begin 
    list <int>::iterator p1=l1.begin();
    list <string>::iterator p2=l2.begin();

    //Print list elements
    while(p1!=l1.end())
    {
        cout<<*p1<<" ";
        p1++;
    }
    cout<<endl;
      while(p2!=l2.end())
    {
        cout<<*p2<<" ";
        p2++;
    }
    cout<<endl;
    // size of list
    // cout<<"ToTal value of list: "<<l1.size()<<endl;
    // cout<<"ToTal value of list: "<<l2.size()<<endl;



    
}