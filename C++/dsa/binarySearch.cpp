#include<iostream>
using namespace std;
int binarySearch(int arr[],int key,int l,int r){
   int i,mid;
   while(l<=r){
     mid = (l+r)/2; 
     if(arr[mid]== key)
        return mid;
     else if (key < arr[mid])
        r = mid-1;
     else
       l = mid+1;      
   }
   return  -1;
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
    res = binarySearch(arr,key,0,n-1);
    if(res==-1)
       cout<<"Element not found";
    else
     cout<<"Element fount at index:"<<res;
    
    
}