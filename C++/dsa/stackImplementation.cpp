#include<iostream>
using namespace std;
int top=-1;
int size,data;
int stack[6];
int capacity = size;
void push(){
   if(top==size-1){
     cout<<"Stack is full\n";
     return;
   }
   cout<<"Enter the data:";
   cin>>data;
   top++;
   stack[top]=data;
}
void pop(){
    if(top==-1){
        cout<<"Stack is empty\n";
        return;
    }
    cout<<stack[top]<<" is popped out\n";
    top--;
}
void peek(){
    if(top==-1){
        cout<<"Stack is empty";
        return;
    }
    cout<<"Top element is:"<<stack[top]<<endl;
}

int main(){
   int choice=0;
   cout<<"Enter the size:";
   cin>>size;
   do{
    cout<<"1.PUSH 2.POP 3.PEEK 4.EXIT\n";
    cout<<"Enter your choice:";
   cin>>choice;
    if(choice==1)
      push();
    if(choice==2)
      pop();
    
    if(choice==3)
      peek();


   }while(choice !=4);
}