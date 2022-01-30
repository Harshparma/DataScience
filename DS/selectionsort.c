#include<stdio.h>
int main()
{
    int a[100],size , i,j;
    printf("enter the size of element\n");
    scanf("%d",&size);
    printf("enter elements\n");
    for(i=0;i<size;i++)
    {
    	scanf("%d",&a[i]);
	}
    printf("\nelements entered\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
    printf("\n\n");
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("elements after sorting\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
}