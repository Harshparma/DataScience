#include<stdio.h>
int main()
{
	int a[100],size ,n, i,j;
	printf("enter the size of element\n");
    scanf("%d",&size);
    printf("enter elements\n");
    for(i=0;i<size;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("list before deletion\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("enter position of element to delete\n");
	scanf("%d",&n);
	for(i=n;i<size;i++)
	{
		a[i]=a[i+1];
	}
    printf("list after deletion\n");
    for(i=0;i<(size-1);i++)
    {
    	printf("%d\n",a[i]);
	}

}
