#include<iostream>
using namespace std;
int main(){
    int fact =1;
    int i,n;
    cout<<"Enter n value:";
    cin>>n;
    for(i=1;i<=n;i++){
        fact =i*fact;
    }
    cout<<"factorial of "<<n<<" is:"<<fact;


    //Finding Trailing 0's in factorail
    int zeros = 0;
    while(fact%10==0){
       fact = fact/10;
        zeros++;
    }
    cout<<"\nNo of trailing zeros is:"<<zeros;

}
// while(n!=0){
//     q=n/5;
//     zeros = zeros +q;
//     n=n/5;


