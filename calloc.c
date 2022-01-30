#include <stdio.h>
#include <stdlib.h>

int main()
{
    //use of calloc
    int *ptr;
    int n;

    printf("Enter the size of the array you want to create\n");
    scanf("%d",&n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)   //if here we put 4 at place  of 3 it gives garbage value (ye pahle kara tha fir baad me 'n' laga diya)
    {
        printf("enter the value at %d of this array is %d\n", i, ptr[i]);
    }

    return 0;
}