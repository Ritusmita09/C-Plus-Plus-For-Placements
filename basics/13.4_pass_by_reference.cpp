// pass by reference - i want to make changes on the original ...does not want to make any copy of original

#include<bits/stdc++.h>
using namespace std;

void doNothing(string &s){ // & -- it takes the address of the original
    s[0] = 't';
    s[s.size() - 1] = 'r'; //s.size()=length and s.size() - 1 -- to change the LAST character
    cout<<"string is: "<<s<<"\n";
}

void doSomething(int &num){
    cout<<"number is: "<<num<<"\n";
    num += 5;
    cout<<"now number is: "<<num<<"\n";
    num += 5;
    cout<<"now number is: "<<num<<"\n";
}


int main(){
    string s;
    int num;
    cout<<"Enter your name: ";cin>>s;
    cout<<"Enter the number: ";cin>>num;
    doNothing(s);
    doSomething(num);
    cout<<s<<"\n";
    cout<<num<<"\n";
}