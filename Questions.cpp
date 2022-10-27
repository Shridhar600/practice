// question 1: Check if the given number is prime or not ?

#include<iostream>
using namespace std;

int main(){

    int a;
    cout << "Enter a Number: ";
    cin >> a;
    bool checker = 0;
    for(int i = 2; i<a ; i++){

        if(a % i == 0 ){
            cout << "Not a prime.";
            checker = 1; // is loop me aaya mtlb loop chla.
            break;
        }
    }

    if(checker == 0 ){ // mtlb loop chla ke bahar aaye hain hum.
        cout << "It is a Prime number.";
    }
return 0;
}
