#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,6,8,10,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp;
    for(int i=0;i<n;i=i+2){
       temp=arr[i];
       arr[i]=arr[i+1];
       arr[i+1]=temp;
    }
    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
   
}