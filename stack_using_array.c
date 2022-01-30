#include <stdio.h>
#include <stdlib.h> //because we are using malloc

struct stack
{
    int size;
    int top;
    int *arr; //is pointer ki help se dynamicaaly memeory allocate karunga apne array ki
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1; // 1 means true
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1) ////for example agar array ki size 5 h then we here write size-1 because array 0 se start ho rahi h
    { 
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;  //denotes that stack is empty means uska topmost element 0 bhi nhi h -1 h
    // s.arr = (int *)malloc(s.size * sizeof(int));   //s.size  or  sizeof ke beach wala star(*) multiplication ke liye h. Or yaha pe ham int store kar rahe h isliye hamne sizeof(int) liya h

    struct stack *s; //if we made stack pointer isse kya easy hoga ki ye jo stack pointer h uske functions ko pass kar sakta hu, call by reference kar sakta hu. HERE STACK  STRUCTURE H USKA 1 POINTER BAN GAYA
    s = (struct stack *)malloc(sizeof(struct stack));  //allocate a dynamic memory
    s->size = 80;    //  -> ye aisa karna sahi hoga because s pahel stack thi lekin ab pointer h
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int)); //int* kyo kiya kyoki jab me malloc use karunga to wo void pointer print karega

    //Pushing an element manually
    // s->arr[0] = 7;
    // s->top++; 

    //check if stack is empty
    if(isEmpty(s)){
        printf("The stack is empty");
    }
    else{
        printf("The stack is not empty");
    }

    return 0;
}
