//C program to implement stack

#include <stdio.h>

int stack[20], choice, n, top, x, i;

void push(void);
void pop(void);
void display(void);

int main()
{
    top = 0;
    printf("Enter the size of stack : ");
    scanf("%d", &n);
    printf("Stack operations using array\n");
    printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    do
    {
        printf("Enter the choice of operation that you want to perform : ");
        scanf("%d", &choice);
        switch (choice)
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
            printf("Exit point\n");
            break;
        }
        default:
        {
            printf("Invalid Entry !\n");
        }
        }
    } while (choice != 4);
}
void push()
{
    if (top >= n)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter a value to be pushed : ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if (top <= 0)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("The popped element is %d\n", stack[top]);
        top--;
    }
}
void display()
{
    if (top > 0)
    {
        printf("\nThe elements in stack are\n");
        for (i = top; i > 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
    else
    {
        printf("Stack is empty\n");
    }
}
