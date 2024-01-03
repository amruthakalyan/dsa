//Dynamic Programing is used to optimise the concept of recursion.
//In DP,we calculate the result and store it in an arry to avoid respective computations again and again.
//Example of DP-- Fibinocci series(MEMOIZATION)
#include<iostream>
using namespace std;
int fibMemoization(int n,int dp[]){
    if(n==0)
       return 0;
    if(n==1)
       return 1;
     if(dp[n]!=-1) 
       return dp[n];
    int sub1=fibMemoization(n-1,dp);
    int sub2=fibMemoization(n-2,dp);
    return dp[n]=sub1+sub2;
}
int fibTabulation(int n,int dp[]){
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[n]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int dp[n+1];
    for(int i=0;i<n;i++){
        dp[i]=-1;
    }
   for(int i=0;i<n;i++){
        cout<<fibMemoization(i,dp)<<" ";
        cout<<fibTabulation(i,dp)<<" ";
    }
}
