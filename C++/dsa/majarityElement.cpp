#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,7,9,6,9,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j,count=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<=n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
               break;
            }
            break;
        }
    }
}