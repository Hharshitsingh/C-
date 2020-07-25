#include<iostream>
using namespace std;
class Base{
    private:
        int data;
    public:
        void getdatabase()
        {
            cout<<"Enter Data: ";
            cin>>data;
        }
        void printdatabase()
        {
            cout<<"Data = "<<data<<endl;
        }
};
class Derived: Base{
    private:
        int data1;
    public:
         void getdatabase()
        {
            cout<<"Enter Data1: ";
            cin>>data1;
        }
        void printdatabase()
        {
            cout<<"Data1 = "<<data1<<endl;
        }
};

int main()
{
    Derived s1;
    s1.getdatabase();
    s1.printdatabase();
    return 0;
}
