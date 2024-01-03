#include<iostream>
using namespace std;
int fib(int);
int main(){
    int n=5;
    int sum=0;
    cout<<"Fibinocci series is:\n";
    for(int i=0;i<n;i++){
    cout<<fib(i)<<" ";
    sum=fib(i)+fib(i+1);
    } 
    cout<<"\nsum="<<sum-1;
}
int fib(int n){
    // cout<<"HELLO"<<endl;
    if(n==0)return 0;
    if(n==1)return 1;
    return fib(n-1)+fib(n-2);
}
