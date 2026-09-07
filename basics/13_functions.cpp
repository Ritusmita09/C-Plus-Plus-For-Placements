#include<bits\stdc++.h>
using namespace std;
// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void() - does not return anything - non parameterised function
void printname(string name){ // void (parameter) = it just prints a name and it is a parameterised function
    cout<<"Hey " << name <<"\n";
}
int main(){
    string name;
    cout << "Enter your name:";cin >> name;
    printname(name); // printname =  function name

    string name2;
    cout << "Enter your name2:";cin>>name2;
    printname(name2);
    return 0;
}
