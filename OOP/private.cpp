#include <iostream>
using namespace std;
class Add
{
private:
    int a, b;

public:
    void input()
    {
        cout << "enter values : ";
        cin >> a >> b;
    }
    void sum()
    {
        int add;
        add = a + b;
        cout << add;
    }
};
int main()
{
    Add obj;
    obj.input();
    obj.sum();
}