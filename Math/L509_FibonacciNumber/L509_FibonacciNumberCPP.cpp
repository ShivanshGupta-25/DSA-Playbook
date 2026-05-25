#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int ans=fibonacci(n);
    if(ans==-1){
        cout<<"The value of n is too large to compute fibonacci number for that value of n."<<endl;
    }
    else{
        cout<<"The "<<n<<"th Fibonacci number is "<<ans<<endl;
    }
}