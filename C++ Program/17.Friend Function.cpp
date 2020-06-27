//overloadinf of insertion and extraction operator
#include<iostream>
using namespace std;
class complex{
    private:
        int a, b;
    public:
        void setdata(int x, int y)
        {
            a = x;
            b = y;
        }
        void showdata()
        {
            cout << "a=" << a << " b=" << b << endl;
        }
        friend ostream& operator<<(ostream&, complex);
        friend istream& operator>>(istream&, complex&);
};
ostream& operator<<(ostream &dout, complex C)
{
    fflush(stdin);
    cout << endl << "a=" << C.a << " b=" << C.b;
    return (dout);
}
istream& operator>>(istream &din, complex &C)
{
    cin >> C.a >> C.b;
    return (din);
}
int main()
{
    complex c1;
    cout << "Enter a Complex number: ";
    cin >> c1;
    cout << "you entered: ";
    cout << c1;
}