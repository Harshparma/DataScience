//https://www.youtube.com/watch?v=ytK4Biw-CW4&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=59
//https://codewithharry.com/videos/data-structures-and-algorithms-in-hindi-59
#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);   //agar output dur dur nhi print ho raha ho to %d ke baad space de dena
    }
    printf("\n");
}

void merge(int A[], int mid, int low, int high) //This is just the merge function, whose only job is to merge two sorted arrays into a bigger sorted array.
{
    int i, j, k, B[100]; //here B is an array jo ki 2 array ko sort and merge karne k baad milega,  here we take B[100] we take large size if we want accurate size then we have to do dynamci memory allocoation
    i = low;             //i marks the current element of the first subarray of array A
    j = mid + 1;         //j marks the first element of the second subarray
    k = low;             //k is the iterator for array B to insert the smaller of elements at indices i and j.

    while (i <= mid && j <= high) //ye ham jab tak karenge jab tak i ko value mid tak na ho jay and j ki value high tak na ho jay  ...OR....Run a while loop until either i or j or both reaches the threshold of their corresponding subarray
    {
        if (A[i] < A[j]) //Inside the loop, see if the element at index i is smaller than the one at index j. If it is, insert element at index i in index k of array B i.e., B[k] = A[i] and increment both i and k by 1, else, insert element at index j in index k of array B i.e. B[k] = A[j] and increment both j and k by 1.
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    //Now, run two separate while loops for inserting the remaining elements, if left, in both the subarrays. And this would finish filling all the elements in sorted order in array B. The only thing left is just to copy the sorted array back again to array A. And we are done.
    while (i <= mid)
    {
        B[k] = A[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++) //agar hamne B array ke andar sare elements merge kar liye h to wapis se A array me copy bhi karne padege
    {
        A[i] = B[i];
    }
}

void mergeSort(int A[], int low, int high)
{
    int mid;
    // if 0 '1' 2 3 if we apply mid=(low+high)/2, then 0+3=3 and 3/2= 1 in c language or programming, then mid comes to 1 .
    if (low < high) //We would recursively call this function only if low is less than high; that is, there are at least two elements in the subarray. Otherwise, we break off from the loop.

    {
        mid = (low + high) / 2;      //yaha apn or koi method bhi use kar sakte h
        mergeSort(A, low, mid);      //left half
        mergeSort(A, mid + 1, high); //right half
        merge(A, mid, low, high);
    }
}

int main()
{
    int A[] = {9, 14, 4, 8, 7, 5, 6};
    int n = 7;
    printArray(A, n);
    mergeSort(A, 0, 6); //(A,low,high)= Here, the lower index would be 0 for the first time, and the higher index would be length -1 for the first time.
    printArray(A, n);
    return 0;
}
