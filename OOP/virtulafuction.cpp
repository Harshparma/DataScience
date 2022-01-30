// run time polymorphism
// here we made two class base class and derived class
// and both class functions are same
// then we add virtual keyword to baseclass and achieve run time polymorphism

#include<iostream>
using namespace std;
class base{
    public:
    virtual void print(){
        cout<<"this is the base class's print function "<<endl;
    }
    void display(){
        cout<<"this is the base class's display function "<<endl;
    }
};
class derived : public base{
     public:
    void print(){
        cout<<"this is the derived class's print function "<<endl;
    }
    void display(){
        cout<<"this is the derived class's display function "<<endl;
    }
};

int main(){
    base *baseptr;     //base class ka pointer
    derived d;         //derived class ka object
    baseptr =&d;     //base ponter me derived class ka address dal diya h

    baseptr -> print();
    baseptr -> display();
   
    

    return 0;
}

// so ye dynamically bind ho raha h means
//jab hamne at run time pe address(baseptr =&d;) diya to wo uske baad bind hua
// or fir usne uska address leke uske hisab se uska fuction execute kiya