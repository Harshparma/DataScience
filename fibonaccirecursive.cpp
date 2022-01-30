#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0){                    // this is base case or condition
        return 0;
    }if(n==1){                   // this is base case or condition
        return 1;
    }

    int prevfibonacci=fibonacci(n-1) + fibonacci(n-2);
    return prevfibonacci;
}
int main(){
    int n;
    cin>>n;

    cout<<fibonacci(n)<<endl;

    return 0;

}






//  above code can be also write in this simple and sort form
// #include<iostream>
// using namespace std;

// int fib(int n){
//     if(n==0 || n==1)   
//     {
//         return n;
//     }

//     return fib(n-1) + fib(n-2);
// }
// int main(){
//     int n;
//     cin>>n;

//     cout<<fibonacci(n)<<endl;

//     return 0;

// }