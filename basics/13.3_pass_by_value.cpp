#include<bits/stdc++.h>
using namespace std;
 //pass by value -- where a copy of original value goes to void() function or any function the copy got passed
void doSomething(int num){
    cout<<"number is: "<<num<<"\n";
    num += 5;
    cout<<"now number is: "<<num<<"\n";
    num += 5;
    cout<<"now number is: "<<num<<"\n";
}
void doNothing(string s){
    s[0] = 'T';
    cout<<"updated string is: "<<s<<"\n";
}
int main(){
    int num;
    string s = "Ritusmita"; // pass by value can be applied on string as well
    cout<<"Enter your number: ";cin>>num;
    doSomething(num);
    doNothing(s);
    cout<<"final number is: "<<num <<"\n"; // its the original number that does not go to doSomething function
    cout<<s<<"\n";
    return 0;
}

