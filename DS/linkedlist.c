// Program=Write a c program to insert a new node in a single linked list at beginning
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head;
void createlinkedlist(int n)
{
    int data;
    struct node *newnode, *temp;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Memory not allocated");
    }
    else
    {
        printf("Enter the data part of node 1 : ");
        scanf("%d", &data);
        head->data = data;
        head->next = NULL;
    }
    temp = head;
    for (int i = 2; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("Memory not allocated to newnode \n");
        }
        else
        {
            printf("Enter the data part of node %d : ", i);
            scanf("%d", &data);
            newnode->data = data;
            newnode->next = NULL;
            temp->next = newnode;
            temp = temp->next;
        }
    }
    printf("LINKED LIST SUCCESSFULLY CREATED\n\n");
}
void displaylinkedlist()
{
    printf("*DISPAYING THE LIINKED LIST*\n");
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    printf("\n\n");
}
void insertnodeatbeginning()
{
    int data;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data part of the new node : ");
    scanf("%d", &data);
    newnode->data = data;
    newnode->next = head;
    head = newnode;
    printf("*NEW NODE INSERTED SUCCESSFULLY*\n\n");
}
int main()
{
    int n;
    printf("Enter number of nodes you want to create : ");
    scanf("%d", &n);
    createlinkedlist(n);
    displaylinkedlist();
    insertnodeatbeginning();
    displaylinkedlist();
    return 0;
}