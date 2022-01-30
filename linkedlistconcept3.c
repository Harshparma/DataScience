#include<stdio.h>
#include<stdlib.h>
/*
head		 second		 third
		|			 |			 |
		|			 |			 |
	+---+-----+	 +----+----+	 +----+----+
	| # | # |	 | # | # |	 | # | # |
	+---+-----+	 +----+----+	 +----+----+   */



                         //////*ADD A NOTE AT THE FRONT\/////////*
//The new node is always added before the head of the given Linked List. 
//And newly added node becomes the new head of the Linked List. For example, if the given Linked List is 10->15->20->25 and we add an item 5 at the front, then the Linked List becomes 5->10->15->20->25. 
//Let us call the function that adds at the front of the list is push(). 
//The push() must receive a pointer to the head pointer, because push must change the head pointer to point to the new node
void push(struct node** head_ref, int new_data){              //pointer pointing to head pointer that's why **(double star)
    struct node* new_data = (struct node*)malloc(sizeof(struct node));    //allocate memory

    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;

}





                        ////////insert a new node after the given prev_node////////

/* Given a node prev_node,  */
void insertAfter(struct Node* prev_node, int new_data)
{
	/*1. check if the given prev_node is NULL */
	if (prev_node == NULL)
	{
	printf("the given previous node cannot be NULL");	
	return;
	}
		
	/* 2. allocate new node */
	struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));

	/* 3. put in the data */
	new_node->data = new_data;

	/* 4. Make next of new node as next of prev_node */
	new_node->next = prev_node->next;

	/* 5. move the next of prev_node as new_node */
	prev_node->next = new_node;
}
