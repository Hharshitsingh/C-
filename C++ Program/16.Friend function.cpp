#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }
    void show_dta()
    {
        cout << "a= " << a << "b= " << b << endl;
    }
    friend void fun(complex);
};
void fun(complex c)
{
    cout << "sum = " << c.a + c.b << endl;
}
int main()
{
    complex c1, c2, c3;
    c1.set_data(4, 5);
    fun(c1);
}