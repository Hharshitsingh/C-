#include<iostream>
using namespace std;
class complex{
    private:
        int a, b;
    public:
        ~complex()
        {
            cout << "Destructor" << endl;
        }
};
void fun()
{
    complex c;
}
int main()
{
    fun();
}