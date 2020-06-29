#include<iostream>
using namespace std;
int main()
{
    float C,F;
    cout << "Enter temrature in celcius: ";
    cin >> C;
    F = (9.0 / 5.0) * C + 32;
    cout << "Tempature  in Farenheit: " << F << endl;
}