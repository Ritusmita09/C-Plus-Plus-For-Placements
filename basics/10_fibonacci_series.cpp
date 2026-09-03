#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter your range";cin>>n;
    if(n<=1){
        cout<<"invalid";
    }
    else{
        int a = 0,b = 1,c;
        cout <<"0 1 ";
        for(int i =2;i<n;i++){
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
    }
}