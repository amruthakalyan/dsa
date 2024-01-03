#include<iostream>
using namespace std;
int main(){
    int arr[]={3,6,8,9,9,10,15};
    int n=arr.length;
    int key = 9;
    int res=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            res = i;
             break;
        }
        
    }
    if(res==-1)
     cout<<"Element not found";
     else
     cout<<"Element found at index:"<<res;
    }

    
