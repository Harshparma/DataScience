#include<iostream>
using namespace std;
class Mentor{
    public:
    void University(){
        cout<<"Medic-Caps University"<<endl;
    }
    void city (){
        cout<<"Indore"<<endl;
    }
}; 
int main(){
    Mentor rahul,harsh;
    rahul.University();
    harsh.University();
    harsh.city();
    
    return 0;
}