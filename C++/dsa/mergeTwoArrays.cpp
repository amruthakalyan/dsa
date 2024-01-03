// Merge Two sorted arrays
#include<iostream>
using namespace std;
int main(){
    int arr1[]={6,8,10,11};
    int arr2[]={0,1,4,7,12};
    int arr1Len = sizeof(arr1)/sizeof(arr1[0]);
     int arr2Len = sizeof(arr2)/sizeof(arr2[0]);
    int newArray[arr1Len + arr2Len];
    int n = sizeof(newArray)/sizeof(arr1[0]);
    for(int i=0;i<n;i++){
        newArray[i]=arr1[i];
    }
    for(int i=0;i<n;i++){
        newArray[i]=arr2[i];
    }
    cout<<"Array before Sorting:\n";
    for(int i=0;i<n;i++){
        cout<<newArray[i]<<" ";
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(newArray[i]>newArray[j]){
                   int temp =newArray[i];
                   newArray[i]=newArray[j];
                   newArray[j]=temp;
               }
            }
        }
      cout<<"\nArray after Sorting:\n";
    for(int i=0;i<n;i++){
        cout<<newArray[i]<<" ";
    }
}