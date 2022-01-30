//Problem: Given an array a[] of size n. Output sum of each subarray of the given aray.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter the size of the array : " ;
    cin>>n;

    int a[n];
    cout<<"Enter the elements of the array : " ;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

  // to store current sum
    int curr = 0; 

    for(int i=0; i<n; i++)
    {
        // in starting sum must be 0 that's why we use curr = 0; 
        curr = 0;  
        for(int j=i; j<n; j++)
        {
            curr += a[j];
            cout << curr <<endl;
        }
    }
    return 0;


}