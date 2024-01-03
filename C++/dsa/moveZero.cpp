//move all the zeros to the end of the array.And place all the non-zero elements in the beginning of the array


#include<iostream>
using namespace std;
int main(){
    int arr[]={2,0,5,9,0,4,0,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count =0;
    int i;
    for(i=0;i<n;i++)
    {
       if(arr[i]!=0){
        arr[count]= arr[i];
        count+=1;
     }
    }
    while(count< n){
        arr[count]=0;
        count++;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}   
