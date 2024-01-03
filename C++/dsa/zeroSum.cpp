#include<iostream>
using namespace std;
int main(){
    int arr[]={3,5,-8,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j,sum=0;
    int find_subarray = false;
    for(i=0;i<n;i++){
        for(j=i;j<=n;j++){
            sum = sum + arr[i];
            if(sum==0){
                find_subarray = true;
            }
        }
    }
    if(find_subarray=true){
        cout<<"Array consists of subaray whose sum is zero";
    }
    else{
         cout<<"Array doesnot consists of subaray whose sum is zero";
    }
}