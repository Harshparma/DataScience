#include<iostream>
using namespace std;
class A
{
    public:
    void function(){
        cout<<"Inheritance"<<endl;
    }
};
class B : public A{                                                                         //class B me class  A Ke public and protectd attributes aa jayenge attributes means data member and member fuction
    void func(){
        cout<<"fuction B"<<endl;
    }
};
int main(){
    B obj;
    obj.function();
   
}