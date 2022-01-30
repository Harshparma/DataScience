// A simple C program for traversal of a linked list
//In the previous program, we have created a simple linked list with three nodes.
//Let us traverse the created list and print the data of each node.
//For traversal, let us write a general-purpose function printList() that prints any given list.
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
		printf("Element: %d\n ", ptr->data);
		ptr = ptr->next; //ye chalta rahega har 1 node pe jab tak wo null na ho jay
	}
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

	head->data = 1;		 // assign data in first node
	head->next = second; // Link first node with second

	second->data = 2; // assign data to second node
	second->next = third;

	third->data = 3; // assign data to third node
	third->next = NULL;  //termintate the list at the third node

	linkedListTraversal(head);   //function ko call kar diya. Head kya h 1 pointer h struct node* type ka

	return 0;
}
