// pass by reference - i want to make changes on the original ...does not want to make any copy of original

#include<bits/stdc++.h>
using namespace std;

void doNothing(string &s){ // & -- it takes the address of the original
    s[0] = 't';
    s[s.size() - 1] = 'r'; //s.size()=length and s.size() - 1 -- to change the LAST character
    cout<<"string is: "<<s<<"\n";
}
int main(){
    string s;
    cout<<"Enter your name: ";cin>>s;
    doNothing(s);
    cout<<s<<"\n"; //output -- titr
}