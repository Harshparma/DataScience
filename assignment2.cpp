//Program to find sum and average of two numbers.

#include <stdio.h>

int main(){
    int x, y;
    int result;
    
    printf("ENTER FIRST NUMBER\n");
    scanf("%d" ,&x);
    
    printf("ENTER SECOND NUMBER\n");
    scanf("%d" ,&y);

    result=x+y;
    printf("The Sum Of Two Number Is %d" ,result);
 
    return 0;
}
