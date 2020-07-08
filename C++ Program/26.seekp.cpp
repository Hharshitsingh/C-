#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("22.FileHandling.txt",ios::ate|ios::app);
    cout<<fout.tellp()<<endl;
    fout.seekp(2,ios_base::beg);
    cout<<fout.tellp();
    fout.close();
}