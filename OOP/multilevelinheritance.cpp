#include <iostream>
using namespace std;
class A
{
public:
    void funcA()
    {
        cout << "Fuction A" << endl;
    }
};
class B : public A
{
public:
    void funcB()
    {
        cout << "Fuction B" << endl;
    }
};
class C : public B
{
public:
    void funcC()
    {
        cout << "Function C" << endl;
    }
};
int main()
{
    C obj;
    obj.funcA();
    obj.funcB();
}