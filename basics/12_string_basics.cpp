#include<bits\stdc++.h>
using namespace std;

int main(){
    string s = "Ritusmita"; // for string we use ""
    int len = s.size();
    s[len-1] = 'e'; // for character we use ''
    cout << s[len - 1] <<"\n";
    cout << s[3];
    return 0;
}