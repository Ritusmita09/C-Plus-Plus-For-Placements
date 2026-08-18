#include <bits/stdc++.h>
using namespace std;
int main(){
    int age , salary , credit_score;
    cout<<"Enter your age , salary , credit_score=";cin>>age>>salary>>credit_score;
    if((age>=21 && salary>=30000 && credit_score>=700) || (age>=25 && salary>=50000 && credit_score>=650)){
        cout<<"you are eligible for loan";
    }
    else{
        cout<<"you are not eligible for loan";
    }
}