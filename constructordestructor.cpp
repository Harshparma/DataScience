#include<iostream>
using namespace std;

class Abc{
    public:
    Abc(){

        cout<<"constructor call"<<endl;
    }
    ~Abc(){
        cout<<"destructor call"<<endl;
    }
};
int main(){
    Abc obj;
}