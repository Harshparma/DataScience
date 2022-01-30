// C program to create single linked list having n nodes.
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	Node *next;
};
int main()
{
	Node *start=NULL,*temp=NULL;
	int n,i;
	printf("How many nodes you want to create?");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(start==NULL)
		{
			start=(Node*)malloc(sizeof(Node));
	        printf("enter data in %d node=",i);
	        scanf("%d",&start->data);
	        start->next=NULL;
	        temp=start;
		}
		else
		{
			temp->next=(Node*)malloc(sizeof(Node));
			temp=temp->next;
			printf("enter data in %d node=",i);
			scanf("%d",&temp->data);
			temp->next=NULL;		    	
		}
	}
	printf("\n--------Printing node--------\n");
	for(i=1;i<=1;i++)
	{
		if(start==NULL)
		{
			printf("list is empty!");
		}
		else
		{
			temp=start;
			for( ;temp->next!=NULL; )
			{
				printf("\nData in %d node =%d ",i,temp->data);
				temp=temp->next;
			}
			printf("\nData in %d node =%d",i,temp->data);
		}
	}
}
