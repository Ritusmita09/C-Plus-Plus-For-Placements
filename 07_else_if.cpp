#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter your score:";cin>>n;
    if(n>=85){
        cout<<"very good! you got an A";
    }
    else if(n>=65){
    cout<<"keep it up! you got a B";
    }
    else if(n>=45){
        cout<<"better luck next time!you got a C";
    }
    else{
        cout<<"sorry!you failed";
    }
}