#include<bits/stdc++.h>
using namespace std;

void doSomething(int arr[], int n){ // array always goes with reference--it changes in the original value itself without any '&' command
    arr[0] += 100;
    cout<<"Value inside function: "<<arr[0]<<"\n";
}
int main(){
    int n = 5;
    int arr[n];
    cout<<"Enter the array: ";
    for(int i = 0; i<5; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    doSomething(arr,n);
    cout<<"Value inside int main: "<<arr[0]<<"\n";
    return 0;
}