#include<iostream>
using namespace std;
int main(){
    int arr[]={-2,-3,4,1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]); 
    int i,j,sum=0;
    int max=INT_FAST8_MIN;
    for(i=0;i<n;i++){
        
        sum = sum +arr[i];
        if(sum > max){
            max = sum;
        }
    }
    
    cout<<"maximum sum is:"<<max;
}