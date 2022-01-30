#include<iostream>
#include<fstream>
/*
the useful classes for working with files in c++ are;
1.fsteambase
2.ifstream-->derived from base class
3.ofstream -->derived from base class

In order to work with files in c++ you will have to ope  it ,primarily there are two ways to open a file.
1. using the constructor
2. using the member furction open() of the class
*/
using namespace std;
int main(){
    string st = "Sachin sar";
    string st2;
    //opening file using construcotr and writing it
    ofstream out("samplefile.txt");    //write operation
    out<<st;

    //opening file using construcotr and reading it
    ifstream in("samplefile2.txt");  //Read operation
    // in>>st2;
    getline(in,st2);
    cout<<st2;
    return 0;

}