#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node* head){
    struct Node *ptr = head;


    // printf("Element is: %d\n",ptr->data);    //agar ye or iske niche wali line nhi likhenge to kuch print hi nhi hoga .isle liye ham se likhna jaruri taki isse kya hoga ki pahle element print ho jaiga then wo next me jata jaiga
    // ptr=ptr->next;
    // //first element print karde fir uske baad chalta rahega next next jab ptr wapis head pe na aa jay

    // while(ptr!=head){  
    //     printf("Element is: %d\n",ptr->data);
    //     ptr=ptr->next;
    // }

    //Ab itni makajmari na karni pade uske liye hi to hota h do while loop now we do this by do while loop
    

    //OR

    do{
        printf("Element is: %d\n",ptr->data); 
        ptr=ptr->next;
    }while(ptr!=head);
}

struct Node* insertAtFirst(struct Node* head, int data){
    struct Node* ptr= (struct Node* )malloc (sizeof(struct Node));
    ptr->data=data;

    struct Node *p = head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;   //because ye bataya h ki jo pahel head jis node ke pass tha ab uske pass nhi h ab wo jo new node ptr wala jiska insertion karway h wo head ban jaiga
    return head;
}

struct Node* insertAtEnd(struct Node* head, int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;

    struct Node *p= head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    // head=ptr;
    return head;

}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = head;

    printf("Circular Linked List Before Insertion\n");
    linkedlistTraversal(head);
    // head = insertAtFirst(head,80);
    // head = insertAtFirst(head,76);
    head = insertAtEnd(head,45);

    printf("\nCircular Linked list After insertion\n");
    linkedlistTraversal(head);
    
    return 0;
}