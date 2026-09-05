#include<bits/stdc++.h>
using namespace std;

int main(){
    //2D array
    int arr[3][5]; // 3(rows)*5(columns)
    arr[1][3] = 56;
    cout<<arr[1][3]; //it only prints the value we defined in previous line 
    //cout<<arr[1][2]; output=1991174736 - it prints grabage value
    return 0;
}