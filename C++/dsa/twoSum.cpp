//(BRUTE-FORCE METHOD)
#include<iostream>
using namespace std;
int main(){
    int n=arr.length;
    int arr[n]={2,-5,6,9,4};
     int sum =15;
     int i,j;
     for(i=0;i<n;i++){
        for(j=i+1;j<=n;j++){
            if(arr[i]+arr[j]==sum){
                cout<<arr[i]<<","<<arr[j]<<endl;
            }
        }
     }    
}

     
    
      



//(TWO POINTER METHOD)2nd method for reducing time complexity to O(n) from O(n^2):

// int l=0;
// int h=n-1;
// while(l<=h){
//     if(arr[l]+arr[h]>sum){
//         h--;
//     }
//     else if(arr[l]+arr[h]<sum){
//         l++;
//     }
//     else{
//         cout<<arr[l]<<","<<arr[h]<<endl;
//     }
// }
