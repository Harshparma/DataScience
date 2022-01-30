//https://codewithharry.com/videos/data-structures-and-algorithms-in-hindi-46
#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;
struct Node
{
    int data;
    struct Node *next;
};

void LinkedlistTraversal(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int data)   //in bracket we dont need to write "struct Node *f, struct Node *r," because we declare globally so we dont need to write 
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node)); //struct Node *n=because me 1 pointer banana chahta tah, (struct Node *)=kyoki me type caste karna chahta hu 1 struct node* pointer me ,(struct Node)= or yaha pe me 1 sturcture ka size lena chahta tha
    if (n == NULL)                                               //is full alag se function bana ke bhi kar sakte h
    {
        printf("Queue is full");
    }
    else
    {
        n->data = data;
        n->next = NULL;
        //If you recall, we discussed a special case, where we were inserting in the list for the first time, when both f and r equals NULL. For this case, make both f and r equal to n, and for all the other cases, just make the r point the new node n. Ultimately make r equal to n since n becomes our new rear end
        if (f == NULL) //SPECIAL CASE = if front and rear both equal to null
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}
 
int dequeue() //in bracket we dont need to write "struct Node *f" because we declare globally so we dont need to write 
{
    int val = -1;
    struct Node *ptr = f;
    if(f==NULL){
        printf("Queue is Empty\n");
    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}


int main()
{
    // struct Node *f = NULL; // ye yaha me nhi kar sakte kyoki front or rear ki copy ja rahi h jab me fuction ko send kar raha hu to uski copy ja rahi h enqueue me to kuch return ho nhi raha h pahel jab me use karta tha to linked list me to head ko return kar leta tha or usi hisab se update kar leta tha to ab ham global variable ka istamal karege 
    // struct Node *r = NULL;
    LinkedlistTraversal(f);
    printf("Dequeing element %d\n",dequeue()); //apan ne kuch enqueue kiya h nhi or dequeue kar denge to -1 print ho jaiga
    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);
    printf("Dequeing element %d\n",dequeue());
    printf("Dequeing element %d\n",dequeue());
    printf("Dequeing element %d\n",dequeue());
    printf("Dequeing element %d\n",dequeue());
    LinkedlistTraversal(f);

    return 0;
}