// program=inserting node before a given node
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * start;
void createlinkedlist(int n)
{
    struct node *temp, *nextnode;
    int data;
    start = (struct node *)malloc(sizeof(struct node));
    if (start == NULL)
    {
        printf("Memory not available ");
    }
    else
    {
        temp = start;
        printf("Enter the data part of node 1 : ");
        scanf("%d", &data);
        temp->data = data;
    }
    for (int i = 2; i <= n; i++)
    {
        nextnode = (struct node *)malloc(sizeof(struct node));
        if (nextnode == NULL)
        {
            printf("Memory not allocated to nextnode"); 
        }
        else
        {
            printf("Enter the data part of nextnode %d : ", i);
            scanf("%d", &data);
            nextnode->data = data;
            nextnode->next = NULL;
            temp->next = nextnode;
            temp = temp->next;
        }
    }
    printf("** LINKED LIST CREATED SUCCESSFULLY **\n");
}
void displaylinkedlist()
{
    printf("DISPLAYING YOUR LINKED LIST\n");
    struct node *temp;

    temp = start;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void insertingnodeaftergivennode()
{
    int data;
    int value;
    struct node *newnode, *ptr, *preptr;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Memory not allocated to newnode ");
    }
    else
    {
        ptr = start;
        preptr = start;
        printf("enter the data part of newnode : ");
        scanf("%d", &data);
        printf("enter the data part of the node after which you want to insert the node : ");
        scanf("%d", &value);
        newnode->data = data;
        while (preptr->data != value)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        newnode->next = ptr;
        preptr->next = newnode;
    }
    printf("** NEW NODE INSERTED SUCCESSFULLY **");
}
int main()
{
    int n;
    printf("Enter the number of node you want : ");
    scanf("%d", &n);
    createlinkedlist(n);
    displaylinkedlist();
    insertingnodeaftergivennode();
    displaylinkedlist();
    return 0;
}