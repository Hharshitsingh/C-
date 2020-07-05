#include<iostream>
using namespace std ;
class Box
{
private:
    int l,b,h;
public:
    void setdata(int l, int b, int h)
    {
        this->l=l;
        this->b=b;
        this->h=h;
    }
    void showdata()
    {
        cout<<"l = "<<l<<" b = "<<b<<" h = "<<h<<endl;
    }
};
int main()
{
    Box *p,sbox;
    p=&sbox;
    p->setdata(22,54,54);
    p->showdata();    
}