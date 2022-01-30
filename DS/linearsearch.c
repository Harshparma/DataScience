//C program to search element present or not in array with help of linear search....
#include<stdio.h>
  
int main()
{
    int arr[20],i,x,m;
    printf("\nEnter Number of elements\n");
    scanf("%d",&m);
     
    printf("Enter array elements\n");
    for(i=0;i<m;i++)
       {
		scanf("%d",&arr[i]);
       }
    printf("\nEnter element to search:");
    scanf("%d",&x);
     
    for(i=0;i<m;i++)
       {
		 if(arr[i]==x)
            break;
       }
    if(i<m)
    {
	 printf("\nElement found at index %d",i);
    }
    else
	{
	 printf("\nElement not found");
    }
    return 0;
}
