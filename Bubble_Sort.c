//https://codewithharry.com/videos/data-structures-and-algorithms-in-hindi-51
#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n"); //next line me print karane k liye neto sab sath me ho jainge print
}
void bubbleSort(int *A, int n) //isko kuch return karne ki jarurat nhi h isliye void kiya ye bas hamara array sort kar ke de de bas hamara kam ho gaya

{
    int temp;                       //temp is an integer
    for (int i = 0; i < n - 1; i++) //for number of pass
    {
        for (int j = 0; j < n - 1 - i; j++) //for comparison in each pass
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}



int main()
{
      int A[] = {12, 54, 65, 7, 23, 9};
    // int A[] = {1, 2, 3, 4, 5, 6};
    //int A[] = {1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987};
    int n = 6;       //size le li
    printArray(A, n); //Printing the array before sorting.
    bubbleSort(A, n); //Function to sort the array
    //bubbleSortAdaptive(A, n);
    printArray(A, n); //Printing the array after sorting ,ye function array ko leta h or usko print karta h

    return 0;
}

//ONE BY ONE DONO FUNCTIO KO bubbleSort,bubbleSortAdaptive dono ko run kar ke dekh na differnt values ke sath size bhi change kar lena jab value kab jad karo