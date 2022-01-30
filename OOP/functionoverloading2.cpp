#include<iostream>
using namespace std;
class Multiplication {
    public:
    int product(int num1,int num2) {
        return num1*num2;
    }
    int product(int num1,int num2,int num3){
        return num1*num2*num3;
    }
};

int main(void) {
        Multiplication obj;
        cout<<obj.product(5,2)<<endl;
        cout<<obj.product(2,3,5);
        return 0;
    }