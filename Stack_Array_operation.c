#include<stdio.h>
#include<stdlib.h>
 
struct stack{
    int size ;
    int top;
    int * arr; //this is an integer pointer by this we allcoate memory dynamically
};
 
int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
            return 1;
        }
        else{
            return 0;
        }
}
 
int isFull(struct stack* ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else{
        return 0;
    }
}
 
void push(struct stack* ptr, int val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;  //ptr->arr is hamare sturcture pointer ka array h
    }
}
 
int pop(struct stack* ptr){  //agar return kara h to int ya float jo bhi ho wo dena padega void matlab jab kuch return nhi karenge
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
 
int main(){
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));  //memory me request kari size ,top ,arr
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");
    
    printf("before pushing, Full: %d\n", isFull(sp));
    printf("before pusing, Empty: %d\n", isEmpty(sp));
    push(sp,1);
    push(sp,23);
    push(sp,99);
    push(sp,75);
    push(sp,3);
    push(sp,64);
    push(sp,57);
    push(sp,46);
    push(sp,89);
    push(sp,6);  // pushed 10 values
    // push(sp,46); //stack overflow since the size of the stack is 10
    printf("After pushing, Full:%d\n",isFull(sp));
    printf("After pushing, Empty: %d\n",isEmpty(sp));

 
    return 0;
}
