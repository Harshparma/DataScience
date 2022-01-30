// Problem= to print all possible subarray of the given array
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;

    int a[n];
    cout<<"enter the array elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++){
            // we made loop for staring point and ending point
            // Now, we have to print all the elemnets between i and j
            // so now we have to made another loop

            for(int k=i;k<=j;k++){
                cout<<a[k]<<" ";
            }cout<<endl;
        }
        

    }
    return 0;
}