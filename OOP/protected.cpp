#include <iostream>
using namespace std;

class add
{
protected:
    int a = 2, b = 5, sum;

public:
    void function()
    {
        cout << "sum = ";
        sum = a + b;
        cout << sum << endl;
    }
};
class multiply : protected add
{
public:
    int multiplication;
    void product()
    {
        cout << "Product = ";
        multiplication = a * b;
        cout << multiplication;
    }
};
int main()
{
    add obj;
    obj.function();
    multiply obj2;
    obj2.product();
}
