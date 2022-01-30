// Hierarchical Inheritance: In this type of inheritance, more than one sub class is inherited from a single base class. 
// i.e. more than one derived class is created from a single base class.
#include<iostream>
using namespace std;
class A{
    public:
    void funcA(){
        cout<<"This is base class "<<endl;
    }
};
class B : public A{
    public:
    void funcB(){
        cout<<"This is first sub class"<<endl;
    }
};
class C : public A{
    public:
    void funcC(){
        cout<<"This is second sub class"<<endl;
    }
};

int main(){
    B obj1;
    obj1.funcA();
    C obj2;
    obj2.funcA();
    
  
    
}