#include<iostream>
using namespace std;
int countPaths(int n,int dp[]){
    if(n==0) return 1;
    if(n<0) return 0;
    if(dp[n]!=-1){
        return dp[n];
    }
    int jump1 = countPaths(n-1,dp);
    int jump2 = countPaths(n-2,dp);
    int jump3 = countPaths(n-3,dp);
    int total = jump1 +jump2 +jump3;
    return dp[n]= total;
}
int main(){
    int stairs;
    cout<<"Enter no.of stairs:";
    cin>>stairs;
    int dp[stairs+1],n,res;
    for(int i=0;i<=stairs;i++){
        dp[i]=-1;
    }
     res = countPaths(stairs,dp);
    cout<<"Total no.of jumps are:\n"<<res;
}