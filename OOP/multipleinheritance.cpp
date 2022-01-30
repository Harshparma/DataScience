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
class B
{
public:
    void funcB()
    {
        cout << "Function B" << endl;
    }
};
class C : public A, public B
{
    void funcC()
    {
        cout << "Function C " << endl;
    }
};
int main()
{
    C obj;
    obj.funcA();
    obj.funcB();
}