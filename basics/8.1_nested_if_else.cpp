#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";cin>>age;
    if(age<18){
        cout<<"You are Not Eligible for Job";
    }
    else if(age<=54){
        cout<<"You are Eligible for Job";
    }
    else if(age<=57){
        cout<<"You are Eligible for Job,but retirement soon";
    }
    else{
        cout<<"You are retired";
    }
    return 0;
}