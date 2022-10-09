#include<iostream>
using namespace std;

int main(){
    cout << "Hello\n";

    int savings;
    cin>> savings;

    if(savings > 5000){
        
        if(savings > 7000){
            cout << " Road trip with Neha\n";
        }
        else {
            cout << "Shopping with Neha\n";
        }
    }
    else if(savings > 2000){
        cout << "Avni\n";
    }

    else {
        cout << "Rashmi\n";
    }
    return 0;






}