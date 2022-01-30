#include <iostream>
using namespace std;
class Base {
   public:
      Base() { cout << "Constructor Base Class\n";}
      ~Base() {cout << "Destructing Base Class\n";}
};
class Derived : public Base {
   public:
      Derived() { cout << "Constructor Derived Class\n";}
      ~Derived(){ cout << "Destructing Derived Class\n";}
};
  class Derived1 : public Derived {
   public:
      Derived1() { cout << "Constructor Derived1 Class\n";}
      ~Derived1(){ cout << "Destructing Derived1 Class\n";}  
  };
    

int main() {
   Derived1 ob;
   return 0;
}
