#include <bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cout<<"Enter your row number:";cin>>rows;
    for(int i = 1; i<=rows; i++){
        for(int j = 1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

}

