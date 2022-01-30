//https://www.youtube.com/watch?v=slXyQKww0-E&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=55
//https://codewithharry.com/videos/data-structures-and-algorithms-in-hindi-55
#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n)
{
    int indexOfmin,temp;
    printf("Runnig selection sort....\n");
    for (int i = 0; i < n - 1; i++)
    {
        indexOfmin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexOfmin])
            {
                indexOfmin = j;
            }
        }
        //swap A[i] and A[indexOfmin]
        temp = A[i];
        A[i] = A[indexOfmin];
        A[indexOfmin] = temp;
    }
}

int main()
{
    // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
    //  00  01  02  03  04
    // |03, 05, 02, 13, 12

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13

    int A[] = {3, 5, 2, 13, 12};
    int n = 5;
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);

    return 0;
}