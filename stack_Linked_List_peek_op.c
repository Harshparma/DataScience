#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

//we declare the top pointer globally
struct Node *top = NULL;

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//isEmpty : It just checks if our top element is NULL.
int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//isFull : A stack is full, only if no more nodes are being created using malloc. This is the condition where heap memory gets exhausted.
int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Push : The first thing we need before pushing an element is to create a new node. Check if the stack is not already full. Now, we follow the same concept we learnt while inserting an element at the head or at the index 0 in a linked list. Just set the address of the current top in the next member of the new node, and update the top element with this new node.
struct Node *push(struct Node *top, int x) //x shayad wahi h jo apn pahle linked list me int data lete the or nich n->next=data kar dete the wahi same kiya h bas data ki place me x n->next=x   or n 1 new node banaya h apne ne dynamically allocate kara h hamne new node banaya kyoki hame insertion karna tha.
{
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

//Pop : First thing is to check if the stack is not already empty Now, we follow the same concept we learnt while deleting an element at the head or at the index 0 in a linked list. Just update the top pointer with the next node, skipping the current top.
int pop(struct Node *tp)
{
    if (isEmpty(tp))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        struct Node *n = tp;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

/*
peek():
Create an integer function peek, and pass the position you want to peek in as a parameter.
Since we have made the stack pointer global, we should not use that pointer to traverse; otherwise, we will lose the pointer to the top node. Rather create a new struct Node pointer ptr and give it the value of top.
Run a loop from 0 to pos-1, since we are already at the first position. 
If our pointer reaches NULL at some point, we must have reached the last node, and the position asked was beyond the available positions, hence breaking the loop.
If the current pointer found the position and it is not equal to NULL, return the data at that node, else -1.*/ 

int peek(int pos)
{
    struct Node *ptr = top;
    for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}

int main()
{

    // struct Node *top = NULL; //top is pointer and top= NULL means linked list is empty
    top = push(top, 28);
    top = push(top, 18);
    top = push(top, 15);
    top = push(top, 7);

    linkedListTraversal(top);

    printf("Value at positon 1 is : %d",peek(1));

    return 0;
}

//is program me pahle pointer to pointer wala concept use kiya the pop operation me then it is comlicated then
// we use another method we declare the top pointer globally fir isse kara h too acche se dekh lena dikkat aai thi isme bhot