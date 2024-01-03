#include<iostream>
using namespace std;
int linearSearch(int arr[],int key,int n){
   int i;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
     return -1;
}
int main(){
    int n=0,i,key,res;
    int arr[n];
    cout<<"Enter no.of elements:";
    cin>>n;
    cout<<"Enter array elements:\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<"Enter the key value:";
    cin>>key;
    res = linearSearch(arr,key,n);
    if(res==-1)
       cout<<"Element not found";
    else
     cout<<"Element fount at index:"<<res;
    
    
}