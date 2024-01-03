#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp[n],k=3;
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
        
    }
    cout<<"Rotated array is:\n";
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}