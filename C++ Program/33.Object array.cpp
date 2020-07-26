#include <iostream>
using namespace std;
class Items
{
private:
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void displaydata()
    {
        cout << "Id of Item " << id << endl;
        cout << "Price of Item " << price << endl;
    }
};
int main()
{
    int size = 3;
    cout << "How many Items you want to add: ";
    cin >> size;
    Items *ptr = new Items[size];
    Items *ptrtemp = ptr;
    int i, x;
    float y;
    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and Price of Items " << i + 1 << ": "; 
        cin >> x >> y;
        ptr->setdata(x, y);
        ptr++;
    }
     ptr = ptrtemp;
    for (i = 0; i < size; i++)
    {
        ptr->displaydata();
        ptr++;
    }
}