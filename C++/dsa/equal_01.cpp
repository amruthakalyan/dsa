// finding maximum length of array with Equal no of 0's and 1's .
#include<iostream>
using namespace std;
int main(){
    int count1=0;
    int count2=0;
    int arr[]={1,0,0,1,0,1,0};
     int  arrLen;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]==1) 
           count2+=1;
        else
            count1+=1;
        if(count1==count2){
            arrLen= count1+count2;
        }
    }
    cout<<"\n1's:"<<count2<<endl;
    cout<<"0's:"<<count1<<endl;
    cout<<"arrLength="<<arrLen;   
}