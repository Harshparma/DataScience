// Given an a[] of size n. For every i from 0 to n-1 output max(a[0],a[1],...,a[i]).

#include<iostream>
using namespace std;

int main(){
    // To store maximum in every iteration we make mx variable.
    int mx=-199999999;  

    int n;
    cout<<"enter the size of the array : ";
    cin>>n;

    int a[n];
    cout<<"enter the elements of the array : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        // in every step we have to update mx variable
        mx = max(mx,a[i]);
        cout<<mx<<" "<<endl;
    }

    return 0;

}