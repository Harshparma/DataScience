#include<iostream>
#include<fstream>
#include<string>        //for getline function
using namespace std;

int main(){
    ofstream out;     //WRITE OPERATION
    out.open("samplefile.txt");
    out<<"this is me\n";
    out<<" also this is me";
    out.close();

    ifstream in;       //READ OPERATION
    string st,st2;
    in.open("samplefile.txt");
    // in>>st>>st2;
    // cout<<st<<st2;   
    // if we comment out previous two line  and we use getline function 

    while(in.eof()==0){           //eof= end of file
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    

    return 0;
}



// By using getline fuction we are getting all data print 
// but when we are using st,st1 and so on we are getting only one by one character 
