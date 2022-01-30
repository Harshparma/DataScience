// write a c++ program to delete an element from an array and print resultant array.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int pos;
    cout<<"enter the position from which you want to delete an element : ";
    cin>>pos;

    for(int i=pos;i<n;i=i+1){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n;i=i+1){
        cout<<arr[i]<<" ";
    }

    return 0;
}