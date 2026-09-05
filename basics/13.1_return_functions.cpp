// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times

#include<bits/stdc++.h>
using namespace std;

int sum(int num1 , int num2){
    int num3 = num1 + num2; 
    return num3; // return function to call function 
}

int main(){
    int num1 , num2 , num3;
    cout<<"Enter two numbers:\n";cin>>num1>>num2;
    int result = sum(num1,num2);
    cout<<"sum is: "<<result;
    return 0;
}