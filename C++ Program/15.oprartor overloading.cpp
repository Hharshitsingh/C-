#include<iostream>
using namespace std;
class integer{
    private:
        int a;
    public:
        void setdata(int x)
        {
            a = x;
        }
        void showdata()
        {
            cout << "a=" << a << endl;
        }
        integer operator++()
        {
            integer i;
            i.a = ++a;
            return i;
        }
        integer operator++(int)
        {
            integer i;
            i.a = a++;
            return (i);
        }
};
int main()
{
    integer i1,i2;
    i1.setdata(3);
    i2=i1++;
    i1.showdata();
    i2.showdata();
}