#include<iostream>
#include<string>
#include<algorithm>

//form the biggest number from the numeric string
using namespace std;

int main()
{
    string s ="548697186";
    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;
}