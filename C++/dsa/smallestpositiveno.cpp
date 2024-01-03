#include<iostream>
using namespace std;
int main(){
    int arr[]={3,2,1,0};
    bool found=false;
    int n = sizeof(arr)/sizeof(arr[0]);
     int res=n;
     for(int i=0;i<n;i++){
          res^=i^ arr[i];
     }    
     cout<<"Smallest missing positive no. is = "<<res<<endl;
}