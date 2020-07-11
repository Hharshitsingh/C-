#include<iostream>
using namespace std;
class Student
{
    string name;
    int age;
    public:
        void setdata(string s, int a)
        {
            name = s;
            age = a;
        }
        void showdata()
        {
            cout<<"name: "<<name<<endl;
            cout<<"age: "<<age<<endl; 
        }
};
int main()
{
    pair <string,int>p1;
    pair <string,string>p2;
    pair <string,float>p3;
    pair<int,Student>p4;
    p1=make_pair("Name",72);
    p2=make_pair("indian","Country");
    p3=make_pair("Book",554.5);
    Student s1;
    s1.setdata("student",54);
    p4=make_pair(1,s1);

    cout<<"Pair1"<<endl;
    cout<<p1.first<<"\t"<<p1.second<<endl;
    cout<<"Pair2"<<endl;
    cout<<p2.first<<"\t"<<p2.second<<endl;
    cout<<"Pair3"<<endl;
    cout<<p3.first<<"\t"<<p3.second<<endl;
    cout<<"Pair4"<<endl;
    cout<<p4.first<<"\t"<<endl;
    Student s2 = p4.second;
    s2.showdata();
}