#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of elements of array"<<endl;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter elements of Unsorted array "<<endl;
        cin>>arr[i];
    }

    int counter=1;
    while(counter<n ){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout <<endl;
}