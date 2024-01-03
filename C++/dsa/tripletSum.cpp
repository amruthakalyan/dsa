#include<iostream>
using namespace std;
int main(){
    int arr[]={-3,6,18,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i, j,k;
    int sum=19;
    for(i=0;i<n;i++){
        for(j=i+1;j<=n;j++){
            for(k=j+1;k<=n;k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                }
            }
        }
    }
    return -1;
}



//optimised approch
// int flag=0;
// for(i=0;i<n,flag==0;i++){
//     int l=i+1;
//     int h=n-1;
//     while(l<=h){
//         if(a[i]+a[l]+a[h]<sum)
//         l++;
//         else if(a[i]+a[l]+a[h]>sum)
//         h--;
//         else
//         cout<<a[i]<<","<<a[l]<<","<<a[h]<<endl;
//     }
// }