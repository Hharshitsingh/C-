#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--){
        int n, budget;
        cin>>n>>budget;
        int maxa=-1;
        while (n--){
            int w, h, p;
            cin>>w>>h>>p;
            if(p<=budget){
                if(w*h>maxa){
                    maxa = w*h;
                }
            }
        }if(maxa==-1){
            cout<<"no tablet"<<endl;
        }else{
            cout<<maxa<<endl;
        }
    }
}