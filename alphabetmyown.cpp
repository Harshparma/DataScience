#include <iostream>
using namespace std;

int main(){

    char ch;
    printf("Enter character\n");
    scanf("%c",&ch);
    if(ch >= 'a' && ch<= 'z'){
        printf("This is an Alphabet");
    }
    else{
        printf("This is not Alphabet");
    }

    return 0;
}