#include<stdio.h>
int stack[50],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{
    top=-1;
    printf("Enter the size of stack[MAX=50]\n");
    scanf("%d",&n);
    printf("stack operation using array\n");
    printf("1.Push 2.Pop 3.Display 4.Exit\n");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("exit point\n");
                break;
            }
            default:
            {
                printf (" enter valid choice(1/2/3/4)\n");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("STACK is over flow\n");
        
    }
    else
    {
        printf(" Enter a value to be pushed\n");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf(" Press Next Choice\n");
    }
    else
    {
        printf("The STACK is empty\n");
    }
   
}
