#include<bits/stdc++.h>
using namespace std;


//1d array
int main(){
    double arr[5]  = {10 , 20 , 30 , 40 , 50}; // similar data type int , float , double , long , long long
    cout << arr[0] <<"\n"<< arr[1] <<"\n"<< arr[2] <<"\n"<< arr[3] <<"\n"<< arr[4]<<"\n\n";
    arr[2] = 34; // we can change the number in the array
    arr[2] += 10; // we can add , subtract , multiply and divide any number
    cout << arr[2];
    return 0;
}