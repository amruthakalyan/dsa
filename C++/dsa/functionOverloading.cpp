#include<iostream>
using namespace std;


// function Overloading means, having same function name but with different parameters of different type
class Base{
    public:
    Base(){
        cout<<"This is a base class"<<endl;
    }
    
    void show(){
        cout<<"Hello world"<<endl;
    }
    int dummy(int val){
        cout<< val<<endl;
    }
    void dummy(){
        cout<<"HEY..!"<<endl;
    }
    int dummy(float val1,int val2){
          cout<<val1<<" "<<val2<<endl;
    }
};
class Derived:public Base{
      public:
       Derived(){
        cout<<"This is a derived class"<<endl;
       }
};
int main(){
     Derived d;
     d.show();
     d.dummy(10);
     d.dummy(10.25);
     d.dummy();
     d.dummy(12.5,15);
}

    
