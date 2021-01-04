/*1.Write a program to store and print the roll no., name, age, address and marks of
4 students using structure*/
#include<iostream>
#include<string>
#include<limits>
void clearbuffer();         //function for clear input buffer
using namespace std;
// class for student all deatail
class student{
private:        //private variables and functions acces by this class or local scope
        string nameofstu;
        int rollno,age;
        // nesting of class 
        // class for student address
        class address{
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
        // class for student marks
        class marks{
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
    student()        //input student detail
    {
        static int i = 1;
        cout<<"Enter Detail of student "<<i++<<endl;
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
    int i,n;
    cout<<"How many Students detail you want to Enter: ";
    cin>>n;
    student s[n];
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"\nDetail of Student "<<i+1<<endl;
        s[i].showdata();
    }
}
void clearbuffer()
{
    cin.ignore(numeric_limits<streamsize>::max()!='\n');
}