#include<iostream>
using namespace std;
class Add
{
    private:
    int a,b;
    public:
    void input(){
        cout<<"enter values : ";
        cin>>a>>b;
    }
    int sum(){
        return a+b;
    };
    int main(){
        Add obj;
        cout<<"sum = "<<obj.sum()<<endl;
    }

    return 0;

}