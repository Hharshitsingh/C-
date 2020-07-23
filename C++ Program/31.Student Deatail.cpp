/*1.Write a program to store and print the roll no., name, age, address and marks of
4 students using structure*/
#include<iostream>
#include<string>
#include<limits>
void clearbuffer();         //function for clear input buffer
using namespace std;
// structure for student all deatail
struct student{
private:        //private variables and functions acces by this structure or local scope
        string nameofstu;
        int rollno,age;
        // nesting of structure 
        // structure for student address
        struct address{
            private:
                string houseno;
                string area;
                string city;
                string state;
                int pincode;
            public:
                void setAdress() //input address
                {
                    cout<<"Enter Address"<<endl;
                    cout<<"House No. ";
                    clearbuffer();
                    cin>>houseno;
                    cout<<"Area: ";
                    clearbuffer();
                    getline(cin,area);
                    cout<<"City : ";
                    getline(cin,city);
                    cout<<"State: ";
                    getline(cin,state);
                    cout<<"Pincode: ";
                    cin>>pincode;
                }
                void showAddress()  //display address
                {
                    cout<<"\nAddress: "<<houseno<<", "<<area<<endl;
                    cout<<city<<", "<<state<<"-"<<pincode<<endl;
                }
        }addressofstu;
        // structure for student marks
        struct marks{
        private:
            string sub[4] = {"PPS", "Chem", "English", "MathsII"};
            float mark[4],total=0;
            int m;
        public:
            void setmarks()         //input marks
            {
                cout<<"Enter Marks"<<endl;
                for(m = 0; m < 4; m++)
                {
                    cout<<sub[m]<<": ";
                    cin>>mark[m];
                    while(mark[m]>100)
                    {
                        cout<<"Wrong Input ! Enter Marks again :";
                        cin>>mark[m];
                    }
                }
            }
            void showmarks()    //display marks
            {
                for(m = 0; m < 4; m++)
                {
                    cout<<sub[m]<<": "<<mark[m]<<endl;
                    total = total+mark[m];
                }
                cout<<"Total Marks: "<<total<<endl;
                (total>132)?cout<<"Pass":cout<<"Fail";
                cout<<endl;
            }
        } marksofstu;
public:     //public variables and functions access in whole program or global scope
    void inputdata()        //input student detail
    {
        cout<<"Name: ";
        clearbuffer();
        getline(cin,nameofstu);
        cout<<"Roll No.: ";
        cin>>rollno;
        cout<<"Age: ";
        cin>>age;
        addressofstu.setAdress();
        marksofstu.setmarks();
    }
    void showdata()         //display student detail
    {
        cout<<"Name: "<<nameofstu<<endl;
        cout<<"Roll No.: "<<rollno<<endl;
        cout<<"Age: "<<age;
        addressofstu.showAddress();
        marksofstu.showmarks();
    }
};
//main code
int main() 
{
    int i;
    student s[4];
    for(i=0;i<4;i++)
    {
        cout<<"\n Enter Detail of Student "<<i+1<<endl;
        s[i].inputdata();
    }
    cout<<endl;
    for(i=0;i<4;i++)
    {
        cout<<"\nDetail of Student "<<i+1<<endl;
        s[i].showdata();
    }
}
void clearbuffer()
{
    cin.ignore(numeric_limits<streamsize>::max()!='\n');
}