#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(3);
    q.push(12);
    q.push(15);
    q.push(17);
    q.push(20);
    // cout<<q.back();
    // q.pop();
    // cout<<q.front();
    cout<<"Size of the queue is:"<<q.size()<<endl;
    cout<<"Queue Elements are:"<<endl;
   while(!q.empty()){
    cout<<q.front()<<" ";//prints the element present at index 0
     q.pop();//after printing the first element ,the pop function pops the first element.
   }
    cout<<"\nno.of elements in the queue:"<<q.front();//print the first e;element ,to check if the queue is empty or not after while loop
}

//#include<bits/stdc++.h> is a built in function for queue data structure
//queue data structure declaration: queue<int>q;
//Queue operations:
//1)size()
//2)empty()
//3)push()
//4)pop()
//5)front()
//6)back()