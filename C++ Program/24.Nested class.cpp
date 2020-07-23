#include <iostream>
#include<string>
#include<limits>
#include<ios>
using namespace std;
class Student
{
private:
    int rollno;
    string name;
    class Address
    {
    private:
        int houseno;
        string area;
        string city;
        string state;
        int pincode;
    public:
        void setAdress()
        {
            cout<<"Enter Your House No. ";
            cin>>houseno;
            cout<<"Enter Your Area: ";
            cin.ignore(numeric_limits<streamsize>::max()!='\n');
            getline(cin,area);
            cout<<"Enter Your City Name: ";
            getline(cin,city);
            cout<<"Enter Your State: ";
            getline(cin,state);
            cout<<"Enter Your Pincode: ";
            cin>>pincode;
        }
        void showAddress()
        {
            cout<<"Address: "<<houseno<<", "<<area<<endl;
            cout<<city<<", "<<state<<"-"<<pincode<<endl;
        }
    };
Address adres;
public:
    void setStudent()
    {
        cout<<"Enter Your Roll No.: ";
        cin>>rollno;
        cout<<"Enter Your Name: ";
        cin.ignore(numeric_limits<streamsize>::max()!='\n');
        getline(cin,name);
        adres.setAdress();
    }
    void showStudent()
    {
        cout<<"Student data"<<endl;
        cout<<"Roll No. "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        adres.showAddress();
    }
};
int main()
{
    Student s1;
    s1.setStudent();
    s1.showStudent();
}