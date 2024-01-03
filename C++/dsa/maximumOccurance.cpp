// #print the maximum occurance of an element ny n/3
#include<iostream>
using namespace std;
int main(){
    int arr[]={8,3,3,8,8,2};
    int i,j,count=0;
    int n=sizeof(arr)/sizeof(arr[0]);;
    for(i=0;i<n;i++){
        for(j=i+1;j<=n;j++){
            if(arr[i]==arr[j]){
                count+=1;
            //cout<<arr[i]<<endl;
            }
            if(count >n/3)
            cout<<arr[i];
        }

      }
    //   cout<<count;
    
    
}