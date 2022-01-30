#include<iostream>
using namespace std;
class complex{                             //we make class for complex number
    private:
    int real,imag;                         //then we take her real and imaginary part
    public:
    // creating constructor
    complex(int r=0,int i=0){
        real = r;
        imag = i;
    }
    // now code for operator overload
    // first complex then class ka name operator
    // now jis operator ko hame overlaod karna h wo operator likha fir hamne object liye by reference
    complex operator + (complex const &obj){
        complex result;
        result.imag = imag + obj.imag;
        result.real = real + obj.real;
        return result;
    }
    // to print
    void display(){
        cout<< real <<" + i"<<imag <<endl;
    }
};

int main(){
    complex c1(12,7), c2(6,7);
    complex c3=c1+c2;
    c3.display();


}