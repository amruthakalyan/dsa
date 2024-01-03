#include<iostream>
using namespace std;
int main(){
    int min=INT16_MAX;
    int max=0;
    int max_difference =0;
    int arr[]={7,1,3,8,4,10};
    int n=arr.length,i,j;
     for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
     }
     for(i=0;i<n;i++){
        
        if(arr[i]<min){
            min = arr[i];
        }
     }
    max_difference = max-min;
    cout<<"Maximum differece is:"<<max_difference;
}