#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node* linkelisttraversal(struct Node *head)
{
    struct Node *ptr = head;

    do
    {
        printf("Elements : %d\n", ptr->data);
        ptr=ptr->next;
    }while(ptr!=NULL && ptr->prev!=NULL);
    return head;

    
}

struct Node* insertatfirst(struct Node* head, int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    ptr->prev=NULL;
    head->prev=ptr;
    return ptr;  //program ko batana padta h ki kaha se start karna h pahle wale traversal me head se tha isliye return head kiya lekin isme new nodeinsert( ptr) kara first place pe  that's why we do return ptr;
    
}

struct Node* insertatend(struct Node* head,int data){
    struct Node* ptr= (struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->next=NULL;
    p->next=ptr;
    // ptr->prev=p;
    return head;  //yaha return head isliye kiya kyoki program ko batana padega ki kaha se print karan h hamne pichle wale me start me 1 ptr add kiya tha isliye hamne waha pe return ptr kara lekin yaha hamne start me kuch nhi add kara means end me kara hamko head se last tak ka data print karna h isliye ham return head karenge.
}



int main()
{
    struct Node *N1;
    struct Node *N2;
    struct Node *N3;
    struct Node *N4;

    //create nodes
    N1 = (struct Node *)malloc(sizeof(struct Node));
    N2 = (struct Node *)malloc(sizeof(struct Node));
    N3 = (struct Node *)malloc(sizeof(struct Node));
    N4 = (struct Node *)malloc(sizeof(struct Node));

    //link nodes

    N1->data = 3;
    N1->next = N2;
    N1->prev = NULL;

    N2->data = 6;
    N2->next = N3;
    N2->prev = N1;

    N3->data = 9;
    N3->next = N4;
    N3->prev = N2;

    N4->data = 13;
    N4->next = NULL;
    N4->prev = N3;

    printf("Linked List Before Insertion\n");
    linkelisttraversal(N1);

    printf("Linked list after insertion\n");
    // N1 = insertatfirst(N1,20);
    N1 = insertatend(N1,100);
    linkelisttraversal(N1);


    return 0;
}