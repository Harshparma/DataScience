#include<iostream>
using namespace std;
class A
{
    public:
    int a,b;
    int multiply;
    void product(){
        multiply=a*b;
        cout<<multiply;
    }
    

};
int main(){
    A obj;
    cout<<"enter first no." ;
    cin>>obj.a;
    cout<<"enter second no. ";
    cin>>obj.b;
    obj.product();

}