#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n ", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *Deletefirstnode(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *DeleteNodeBetween(struct Node *head, int index)
{
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    struct Node *ptr = p->next;
    p->next = ptr->next;
    free(ptr);
    return head;
}

struct Node *DeleteAtEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *ptr = head->next; //yaha head ki place pe p bhi rahka to chal jaiga
    while (ptr->next != NULL)
    {
        p = p->next;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return head;
}

// Case 4: Deleting the element with a given value from the linked list
struct Node * deleteByValue(struct Node * head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}




int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));




    head->data = 8;
    head->next = second;

    second->data = 55;
    second->next = third;

    third->data = 45;
    third->next = fourth;

    fourth->data = 96;
    fourth->next = fifth;

    fifth->data = 100;
    fifth->next = NULL;

    printf("Linked List Before Deletion\n");
    linkedListTraversal(head);

    // head = Deletefirstnode(head);
    // head = DeleteNodeBetween(head,1);
    // head = DeleteAtEnd(head);
    head = deleteByValue(head,55);

    printf("Linked List After Deletion\n");
    linkedListTraversal(head);

    return 0;
}
