#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,5,5,5,6,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=5;
    int res=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            res = i;
        }
    }
    if(res==-1)
    cout<<"ELement not found";
    else
    cout<<"Last occurance of "<<key<<" is at index:"<<res<<" ";
}