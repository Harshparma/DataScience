#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr) //for traversal.  Muje 1 aisa pointer chaiye jo struct Node* type ka ho or wo point kar raha ho head node pe
{
    while (ptr != NULL)
    {
        printf("Element: %d\n ", ptr->data);      //ptr->data because yaha pe fir ptr ka data aa jaiga
        ptr = ptr->next; //ye chalta rahega har 1 node pe jab tak wo null na ho jay
    }
}

//Case 1
struct Node *insertAtFirst(struct Node *head, int data)
{                                                                  //ham 1 function bana lete h insertatfirst name se jo kya return karega wo karega 1 struct node* return karega means 1 head return karega menas head pointer return karega. Agar ham starting me insert karna chahte h to hame 1 head chaiye or data chaiye
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node)); //dynamically allocate kar ke heap me 1 node create kiya
    ptr->data = data;
    ptr->next = head;

    return ptr;
}

//Case 2
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head; //me apne head ko khona nhi chahta. Means p ko initialize kara diya head se means p tum yaha aa jao jaha head h fir p ko aage bade diya jaiga jab tak index na mil jay jaha insert karana h

    int i = 0;             //i is index
    while (i != index - 1) //first i value is zero then one then two . means ham ye chate h ki i jo h wo waha tak aa jay jaha hamare index h uske minus one tak aa jai.  matalb me aa raha hu jaha insert karna h uske 1 kadam pahle means 2 index pe karna h to uske pahle lake ke khada kar diya p ko
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head; //means jo purana head to wahi new head rahega koi change nhi aaiga
}

//Case 3
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node)); //dynamically allocate kar ke heap me 1 node create kiya
    ptr->data = data;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// Case 4
struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{ //previous name isliye raha kyoki me use prevous node ke baad insert karna chahta hu. Here agar head nhi bhi le to chalega ham uske bigar connect kar sakte h jo mere node given h uske baad 1 naya data bana k usko connect kar dunga linked list ke bicho bich. But ham head le rahe h just for simplicity purpose.
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;


    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // allocate 3 nodes in the heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;      // assign data in first node
    head->next = second; // Link first node with second

    second->data = 2; // assign data to second node
    second->next = third;

    third->data = 3;    // assign data to third node
    third->next = NULL; //termintate the list at the third node

    printf("Linked List Before Insertion\n");
    linkedListTraversal(head); //function ko call kar diya. Head kya h 1 pointer h struct node* type ka
    // head = insertAtFirst(head,56);  //because ye jo function h wo return kar raha h new head
    // head = insertAtIndex(head,56,1);
    head = insertAtEnd(head,56);
    // head = insertAfterNode(head, second, 45);
    printf("\nLinked list After insertion\n");
    linkedListTraversal(head);

    return 0;
}