#include <iostream>
using namespace std;
class Base
{
public:
    int var_b;
    void display()
    {
        cout << "Base Class Varibale " << var_b << endl;
    }
};
class Derived : public Base
{
public:
    int var_d;
    void display()
    {
        cout << "Derive Class Varibale " << var_d << endl;
    }
};
int main()
{
    Base *base_pointer;
    Base obj_base;
    Derived obj_derive;
    Derived *derive_pointer;
    base_pointer = &obj_derive;
    base_pointer->var_b = 646;
    base_pointer->display();
    derive_pointer = &obj_derive;
    derive_pointer->var_d = 464;
    derive_pointer->display();
}
