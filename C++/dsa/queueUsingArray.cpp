#include<iostream>
using namespace std;
int size=5,data;
int queue[5], choice=0;
int front=-1,rear=-1;
void enqueue(){
    if(rear==size-1){
        cout<<"Queue is full"<<endl;
        return;
    }
    cout<<"Enter the data:";
    cin>>data;
    if(front==-1 && rear==-1){
    front=0;
    rear=0;
    }
    else{
       rear++;
    }
    queue[rear]=data;
}
void dequeue(){
    if(front==-1){
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<queue[front]<<" is deleted"<<endl;
    front++;   
}
void peek(){
    if(front==-1){
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<queue[front]<<endl;
}
void display(){
    while(front<=rear){
        cout<<queue[front]<<" ";
        front++;
    }
    cout<<"\n";
}
int main(){
   do{
    cout<<"1.Enqueue 2.Dequeue 3.peek 4.Display 5.Exit"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;
    if(choice == 1)
    enqueue();
    if(choice == 2)
    dequeue();
    if(choice == 3)
    peek();
    if(choice == 4)
    display();
   }while(choice !=5);
   
}
