#include<iostream>
using namespace std;
int check_max(int a, int b, int c)
{
    int big = (a>b&&a>c)?a:(b>c)?b:c;
    return big;
}
string pythagoras_triplet(int a, int b, int c)
{
    int max_of_three = check_max(a,b,c);
    int x,y;
    if(max_of_three==a)
    {
        x=b;
        y=c;
    }
    else if(max_of_three==b)
    {
        x=a;
        y=c;
    }
    else
    {
        x=a;
        y=b;

    }
    if((max_of_three*max_of_three)== (x*x)+(y*y))
        return "Yes it is pythagoras triplet";
    else
        return "Not a pythagoras triplet";
}
int main()
{
    int a,b,c;
    cout<<"Enter Three Numbers: ";
    cin>>a>>b>>c;
    string result = pythagoras_triplet(a,b,c);
    cout<<result<<endl;
}