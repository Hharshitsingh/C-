#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fin;
    char ch;
    fin.open("22.FileHandling.txt",ios::app);
    int pos;
    pos=fin.tellp();
    cout<<pos;
    fin<<"RAJPUT";
    pos=fin.tellp();
    cout<<pos;
    fin.close();
}