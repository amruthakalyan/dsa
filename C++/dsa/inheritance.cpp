#include<iostream>
#include<string.h>
using namespace std;

// MULTI-LEVEL INHERITENCE
class A{
    // string name = "kalyan";
  public:A(){
        cout<<"A"<<endl;
    
    }
    public:
    string getName(string name){
        cout<<"My name is:"<<name;
        
     }
};
class B{
    public:B(){
        cout<<"B"<<endl;
    }
};
class C:public A,public B{
    public :C(){
        cout<<"C"<<endl;
    }
};




int main(){
    C c;
    A a;
     a.getName("kalyan_amrutha");
    
    
}
