#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int a,b;
        cin >> a >> b;
        int i=0, l =0, tb= 0;
        while (l<=a && tb <= b){
            i ++;
            l +=i;
            i++;
            tb +=i;
        }
        if((l>a&&tb>b) || (l>a)){
            cout <<"Bob"<<endl;
        }else{
            cout<<"Limak"<<endl;
        }
    }
}