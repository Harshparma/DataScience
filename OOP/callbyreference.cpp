// CALL BY VALUE
// in call by value only values is going not a variable
#include<iostream>
using namespace std;

// void swap(int a,int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

// int main(){
//     int a=2;
//     int b=4;

//     swap(a,b);
//     cout<<a<<" "<<b<<endl;
    
//     return 0;
// }






// CALL BY REFERENCE
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=2;
    int b=4;

    int *aptr=&a;
    int *bptr=&b;

    swap(aptr,bptr);
    // in upper line we can also write as swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    
    return 0;
}


