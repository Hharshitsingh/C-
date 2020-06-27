#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    complex(int x, int y)   //parameterized constructor
    {
        a = x;
        b = y;
    }
    complex(int k)      //parameterized constructor
    {
        a = k;
    }
    complex()   
    {   }      //default constructor
    complex(complex &c) //copy contructor
    {
        a = c.a;
        b = c.b;
    }
};
int main()
{
    complex c1(3,4),c2(5),c3;
    complex c4 = 5;
    complex c5(c1);
}