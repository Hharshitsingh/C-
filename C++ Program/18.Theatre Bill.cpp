#include<iostream>
using namespace std;
int main()
{
    int pizs, puf, cldrink;
    cout << "Enter the no. of Pizzas bought: ";
    cin >> pizs;
    cout << "Enter the no.of Puffs bought : ";
    cin >> puf;
    cout << "Enter the no.of ColdDrinks bought : ";
    cin >> cldrink;
    cout << "Bill Details" << endl;
    cout << "No. of Pizzas: " << pizs << endl;
    cout << "No. of Puffs: " << puf << endl;
    cout << "No. of ColdDrinks: " << cldrink << endl;
    cout << "Total Price: " << (pizs * 100) + (puf * 20) + (cldrink * 10) << endl;
    cout << "ENJOY THE SHOW!!!";
}