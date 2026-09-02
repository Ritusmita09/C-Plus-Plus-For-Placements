#include<bits/stdc++.h>
using namespace std;
int main(){
    double a , b;
    int choice;
    cout<<"Enter your two numbers a & b=";cin>>a>>b;
    cout<<"Enter your choice= 1.add 2.sub 3.multi 4.div\n";cin>>choice;
    switch(choice){
        case 1:
        cout<<"sum is="<<a+b;
        break;
        case 2:
        cout<<"sub is="<<a-b;
        break;
        case 3:
        cout<<"multi is="<<a*b;
        break;
        case 4:
        cout<<"div is="<<a/b;
        break;
        default:
        cout<<"Invalid choice!";
    }
}