//DOUBT IN VOID COUNT SORT FUNCTION WHILE LOOP AND REQUIRED PRACTICE

//https://www.youtube.com/watch?v=HkvChUv9dDg&t=773s
//https://codewithharry.com/videos/data-structures-and-algorithms-in-hindi-60
#include <stdio.h>
#include <limits.h> // be able to use malloc.

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[]);
    }
    printf("\n");
}

//Create an integer function maximum and pass the array and its length as its parameters. Create an integer variable max to store the maximum element. Initialize this max with the least possible number we have, which is To use this identifier; you must include <limits.h>. Now iterate through the whole array using a for loop, and if you find an element greater than the current max, update max. At the end, return max.
int maximum(int A[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}

void countSort(int *A, int n)
{
    //Find the maximum element in A
    int max = maximum(A, n); //agar muje maximum element mil gaya to muje 1 new array create karna padega or wo array muje dynamically create karna padega or us arrray ka name rakhunga count

    //create the count array
    int *count = (int *)malloc((max + 1) * sizeof(int)); //count array create kar liya, hamne max+1 ka kyo banaya kyoki jab hamne dekha tha example me tak maximum element the 9 tab hamko 0 to 9 tak indices chaiye thi or hamko 10 size ka array banana tha means max+1 is 9+1=10.

    //Initialize the array elements to 0
    for
}

int main()
{
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = 7;
    printArray();
    countSort();
    printArray();
    return 0;
}

void countSort(int *A, int n)
{
    int i, j;
    // Find the maximum element in A
    int max = maximum(A, n);

    // Create the count array
    int *count = (int *)malloc((max + 1) * sizeof(int));

    // Initialize the array elements to 0
    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    // Increment the corresponding index in the count array
    for (i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]] + 1;
    }

    i = 0; // counter for count array
    j = 0; // counter for given array A

    while (i <= max)
    {
        if (count[i] > 0)
        {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}
