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
    printf("elements entered are \n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
    printf("\n\n");
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<(size-i)-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("elements after sorting \n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
}