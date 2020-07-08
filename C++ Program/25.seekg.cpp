#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("22.FileHandling.txt");
    cout<<fin.tellg()<<endl;
    cout<<(char)fin.get();
    cout<<(char)fin.get();
    cout<<endl<<fin.tellg()<<endl;
    fin.seekg(6);
    cout<<fin.tellg()<<endl;
    cout<<(char)fin.get();
    cout<<endl<<fin.tellg()<<endl;
    fin.seekg(-2,ios_base::end);
    cout<<fin.tellg()<<endl;
    cout<<(char)fin.get();



}