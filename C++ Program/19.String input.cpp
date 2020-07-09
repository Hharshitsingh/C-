#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout << "Enter the name: ";
    getline(cin,str);
   //cin >> str;
    cout << "Welcome " << str << " Achive with all your might" << endl;
}