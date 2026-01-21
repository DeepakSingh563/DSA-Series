#include<iostream>
using namespace std ;
int main () {
    int a=0,b=1,fib,n;
    cin>>n;
    cout<<a<<" "<<b <<" ";
    for(int i=2; i<n;i++){
        fib=a+b;
        a=b;
        b=fib;

        cout<<(fib)<<" ";
    }
}