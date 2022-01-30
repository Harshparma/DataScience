#include<stdio.h>
int main()
{
	int a[50];
	int size, i, num, pos;
	printf("enter size of array");
	scanf("%d",&size);
	printf("enter elements of array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements in array are\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("enter data you want to insert\n");
	scanf("%d",&num);
	printf("enter position\n");
	scanf("%d",&pos);
    printf("\n------Final array after insertion------\n");
	for(i=size-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=num;
	size++;
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
}
