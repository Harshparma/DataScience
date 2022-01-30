#include<stdio.h>
int main()
{
    int a[100], size, i, j;
    printf("enter the size of element\n");
    scanf("%d",&size);
    printf("enter elements\n");
    for(i=0;i<size;i++)
    {
    	scanf("%d",&a[i]);
	}
    printf("\nelements entered are\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n\n");
    for(i=1;i<size;i++)
    {
       int temp=a[i];
        j=i-1;
        while((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("elements after sorting\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
}