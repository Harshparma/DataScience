// Hybrid Inheritance is implemented by combining more than one type of inheritance.
//  For example: Combining Hierarchical inheritance and Multiple Inheritance.
#include <iostream>
using namespace std;
class A
{
public:
    void funcA()
    {
        cout << "This is base class" << endl;
    }
};
class B
{
public:
    void funcB()
    {
        cout << "This is 2nd base class " << endl;
    }
};
class C : public A
{
public:
    void funcC()
    {
        cout << "This is first sub class " << endl;
    }
};
class D : public A, public B
{
public:
    void funcD()
    {
        cout << "This is second sub class " << endl;
    }
};

int main()
{
    D obj;
    obj.funcA();
    obj.funcB();
    return 0;
}