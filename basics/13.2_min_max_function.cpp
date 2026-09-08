#include<bits/stdc++.h>
using namespace std;

int maxx(int num1, int num2){
if(num1>=num2){
    return num1;
}
else{
    return num2;
}
}
int main(){
    int num1, num2;
    cout<<"Enter two numbers: \n";cin>>num1>>num2;
    int minimum = min(num1, num2); //built-in C++ function that compares two values and returns the smaller one.
    int maximum = max(num1, num2); //built-in C++ function that compares two values and returns the bigger one.
    int result = maxx(num1, num2); // we are calling the result of maxx function
    cout<<"minimum number is : " << minimum << "\n";
    cout<<"maximum number is : " << maximum << "\n";
    cout<<"result of maxx function : " << result;
    return 0;
}