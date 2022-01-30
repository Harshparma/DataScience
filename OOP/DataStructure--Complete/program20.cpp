//Programs to implement queue

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int data[10], front = -1, rear = -1;
    int ch, i;
    for (;;)
    {
        printf("\nPress 1 for Insert Queue ");
        printf("\nPress 2 for Delete Queue ");
        printf("\nPress 3 Traverse the Element ");
        printf("\nPress 4 for Exit");
        printf("\nenter your choice:\t");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (rear == 9)
            {
                printf("Queue is Full....!");
            }
            else
            {
                if (front == -1)
                {
                    front++;
                    rear++;
                    ;
                    printf("Enter the Data in Queue = ");
                    scanf("%d", &data[rear]);
                }
                else
                {
                    rear++;
                    printf("Enter the Data in Queue = ");
                    scanf("%d", &data[rear]);
                }
            }
            break;

        case 2:
            if (front == -1 || front > rear)
            {
                printf("Queue is Empty ...!");
            }
            else
            {
                printf("\nDeleted Element is %d at %d Index of Queue ", data[front], front);
                front++;
            }
            break;

        case 3:
            if (front == -1 || front > rear)
            {
                printf("\nQueue is Empty ....!");
            }
            else
            {
                for (i = front; i <= rear; i++)
                {
                    printf("%d | ", data[i]);
                }
            }
            break;

        case 4:
            exit(1);
            break;
        }
    }
}
