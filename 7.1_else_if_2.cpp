#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter your marks:";cin>>n;
    if(n < 25){

    cout << "sorry! you failed and got an F";

}

else if(n <= 44){

    cout << "SHIT YAAR! You got an E";

}

else if(n <= 49){

    cout << "DO BETTER! You got a D";

}

else if(n <= 59){

    cout << "OKAY! You got a C";

}

else if(n <= 79){

    cout << "good job! You got a B";

}

else if(n <= 100){

    cout << "outstanding! You got an A";

}
    return 0;
}