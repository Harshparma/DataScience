#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // connecting our file with obj1 stream
    ofstream obj1("samplefile.txt");
    // creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name";
    cin>>name;
    // writing a string to the file
    obj1<<name + "is my name";
    obj1.close();


    ifstream obj2("samplefile.txt");
    string content;
    obj2>>content;
    cout<<"The content of this file is : " <<content;
    obj2.close();

    


    return 0;
}