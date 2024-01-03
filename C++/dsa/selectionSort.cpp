#include<iostream>
using namespace std;
int main(){  
    int n=0;
    int arr[n];
     int temp=0,i,j; 
     cout<<"Enter no.of elements:";
     cin>>n;
     cout<<"Enter array elements:\n";
     for(i=0;i<n;i++){
        cin>>arr[i];
     }
     cout<<"Array elements Before sorting:\n";
     for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
    cout<<"\nArray elements After sorting:\n";
    for(i=0;i<n;i++){
        for(j=i+1;j<=n;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
        cout<<arr[i]<<" ";
 }

}

