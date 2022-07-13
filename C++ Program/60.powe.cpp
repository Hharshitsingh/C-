#include<iostream>
using namespace std;
int power(int m, int n){
    if(n==0){
        return 1;
    }else{
       return power(m,n-1)*m;
    }
}

int power2(int m, int n){
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        return power(m*m, n/2);
    }
    
    else{
       return m*power2(m*m,(n-1)/2);
    }
}


int main()
{
    int m ,n;
    cout<<"Enter m & n ";
    cin>>m>>n;
    int p = power2(m,n);
    cout<<"Power is "<<p<<endl;
}