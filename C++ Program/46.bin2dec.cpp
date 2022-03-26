#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, quot, dnum=0, power=0;
    cin >> num;
    
    while (num > 0){
        quot = num%10;
        num = num/10;
        dnum = dnum + quot*pow(2,power);
        power++;
    }
    cout << dnum;
}