// write a c++ program to insert a new elements in existing array.
#include<iostream>
using namespace std;

int main(){

    int n,pos,elem;
    cout<<"enter the size of the array : ";
    cin>>n;
    int arr[n+1];
    cout<<"enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout<<"enter the position where you want to insert an element : ";
    cin>>pos;
    cout<<"enter the element which you want to insert : ";
    cin>>elem;

    for(int i=n; i>=0; i--){
        arr[i+1] = arr[i];
        if(i == pos)
        {
            arr[i] = elem;
            break;
        }
    }
    
    for(int i=0;i<n+1;i++)
    {
        cout << arr[i] << " ";
    }
    
    
    
    return 0;
}