#include<iostream>
using namespace std;
int sum_of_n(int n)
{
    int sum;
    sum = (n*(n+1))/2;
    return sum;

}
int main()
{
    int n;
    cout<<"Enter value of n ";
    cin>>n;
    int sum = sum_of_n(n);
    cout<<"sum of "<<n<<"is "<<sum;
}