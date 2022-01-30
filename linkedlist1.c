#include <stdio.h>
#include <stdlib.h> //for malloc and calloc
struct node
{
    int data;
    struct node *next;

} * start;

void createlinkedlist(int n)
{
    printf("**** Creating the linked list ****\n");
    struct node *temp;
    int value;
    struct node *nextnode;
    start = (struct node *)malloc(sizeof(struct node));
    if (start == NULL)
    {
        printf("memory not allocated");
    }
    else
    {
        start = temp;
        printf("enter the data of node 1");
        scanf("%d", &value);
        temp->data = value;
        temp->next = NULL;
    }
    for (int i = 2; i < n; i++)
    {
        nextnode = (struct node *)malloc(sizeof(struct node));
        if (nextnode == NULL)
        {
            printf("memory not allocated");
        }
        else
        {
            printf("enter the data of node %d ", i);
            scanf("%d", &value);
            nextnode->data = value;
            nextnode->next = NULL;
            temp->next = nextnode;
            temp = nextnode;
            temp = temp->next;
        }
    }
    void displaylinkedlist()
    {
        printf("**** Displaying your linked lists **** \n");
        struct node *temp;
        temp = start;
        while (temp->next != NULL)
        {
            printf("data 1=", temp->data);
            printf("\n"); //to print in next line
        }
    }

    void insertnodeatbeginning()
    {
        printf("**** inserting node at the beginning **** ");
        struct node *newnode, *temp;
        int value;
        temp = start;
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("memory not allocated");
        }
        else
        {
            printf("enter the data part of newnode : ");
            scanf("%d", &value);
            newnode->data = value;
            newnode->next = start;
            start = newnode;
        }
    }
}
int main()
{
    int n;
    printf("enter the number of nodes");
    scanf("%d", &n);

    int createlinkedlist(n);
    int displaylinkedlist();
    int insertnodeatbeginning();
    int displaylinkedlist();

    return 0;
}
