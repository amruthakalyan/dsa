#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,0,4,4,7,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[j]<<" ";
                
            }
            break;
        }
    }
}