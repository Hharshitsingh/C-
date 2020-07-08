#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("22.FileHandling.dat");
    fout<<"HARSHIT SINGH";
    fout.close();
}