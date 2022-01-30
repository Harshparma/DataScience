#include<iostream>
using namespace std;
class ApnaCollege
{
    public:
    void fun()
    {
        cout<<"I am a fuction with no arguments "<<endl;
    }
    void fun(int x)
    {
        cout<<"I am a fuction with int argrument" <<endl;
    }
    void fun(double x)
    {
        cout<<"I am a fuction with double argrument" <<endl;
    }
};
int main(){
    ApnaCollege obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
}