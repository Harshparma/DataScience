// C++ program to Find Sum of Natural Numbers using Recursion
#include<iostream>
using namespace std;

int sum(int n){

    if(n==0)
    {
        return 0;
    }
    // same function use karke (n-1) tak ka sum nikal lenge
    int prevsum = sum(n-1);
    // (n-1) tak ko jo sum h usme agar n add kar denge to n tak ka sum mil jayega
    return n + prevsum;
}

int main(){
    int n;
    cout<<"enter the positive number : " ;
    cin>>n;

    cout<<sum(n)<<endl;

    return 0;

    // In the above program, the function sum() is a recursive function. If n is 0, it returns 0 as the sum of the first 0 natural numbers is 0. If n is more than 0, then sum recursively calls itself itself with the value n-1 and eventually returns the sum of n, n-1, n-2…...2,1. 


}