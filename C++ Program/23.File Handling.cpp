#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("22.FileHandling.dat");
    fin>>ch;
    while(!fin.eof())
    {
        cout<<ch;
        ch=fin.get();
    }
    fin.close();
}