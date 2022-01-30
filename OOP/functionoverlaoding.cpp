#include <iostream>
using namespace std;
class Addition
{
public:
    int sum(int num1, int num2)
    {
        return num1 + num2;
    }
    int sum(int num1, int num2, int num3)
    {
        return num1 + num2 + num3;
    }
};
int main()
{
    Addition obj;
    cout << obj.sum(25, 19) << endl;
    cout << obj.sum(2, 3, 5);
    return 0;
}