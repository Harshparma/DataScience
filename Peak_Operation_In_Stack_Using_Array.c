#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr; //this is an integer pointer by this we allcoate memory dynamically
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val; //ptr->arr is hamare sturcture pointer ka array h
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

// popping from a stack, needs you to first check if it is not empty, and then you just decrease the value of the top by 1.
int peek(struct stack *sp, int i)
{
    // int arrayInd = sp->top-i+1 //hamne 1 arrayInd name ka 1 variable bana liye or usme sp->top-i+1 daal diya taki itna bada baar baar na likhan pade agar nhi banana h arrayInd to mat banao direct bhi kar sakte h bas sp->top-i+1 baar baar likhna padega
    if (sp->top - i + 1 < 0)
    {
        printf("Not a valid position for tha stack\n");
        return -1;
    }
    else
    {
        return sp->arr[sp->top - i + 1];
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack)); //memory me request kari size ,top ,arr
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");

    printf("before pushing, Full: %d\n", isFull(sp));
    printf("before pusing, Empty: %d\n", isEmpty(sp));
    push(sp, 1);
    push(sp, 23);
    push(sp, 99);
    push(sp, 75);
    push(sp, 3);
    push(sp, 64);
    push(sp, 57);
    push(sp, 46);
    push(sp, 89);
    push(sp, 6); // pushed 10 values
    // push(sp,46); //stack overflow since the size of the stack is 10
    printf("After pushing, Full:%d\n", isFull(sp));
    printf("After pushing, Empty: %d\n", isEmpty(sp));

    printf("Popped &d form the stack\n", pop(sp)); //Last in first out
    printf("Popped &d form the stack\n", pop(sp)); //Last in first out
    printf("Popped &d form the stack\n", pop(sp)); //Last in first out

    //printing values form the stack
    for (int j = 1; j <= sp->top + 1; j++)
    {
        printf("The value at position %d is %d\n", j, peek(sp, j));
    }

    return 0;
}
