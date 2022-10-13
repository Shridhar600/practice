#include<iostream>
using namespace std;

int main(){


    char button;
    cout << "Input a character: ";
    cin >> button;


    switch ( button){

        case 'a':
        cout << "hello ";
        break;
        case 'b':
        cout << " B likha hai ";
        break;

        default:
        cout << " agar koi case hit nahi hua to ye hit hoga";
        break;
        

    }

}