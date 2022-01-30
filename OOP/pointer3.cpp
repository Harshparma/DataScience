#include<iostream>
using namespace std;
// INCREMENT A POINTER VALUE
// int main(){
//     int a=10;
//     int *aptr=&a;
//     cout<<aptr<<endl;
//     cout<<*aptr<<endl;

//     aptr++;
//     cout<<aptr<<endl;
    

//     return 0;
// }




// int main(){
//     char ch='a';
//     char *cptr = &ch;
//     cout<<cptr<<endl;

//     cptr++;
//     cout<<cptr<<endl;

//     return 0;
// }


// Pointer to pointer
int main(){
    int a=10;
    int *aptr;
    aptr = &a;

    cout<<*aptr<<endl;

    int **q=&aptr;

    cout<<*q<<endl;
    cout<<**q<<endl;

    return 0;
   

}