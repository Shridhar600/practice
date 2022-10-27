// Reverser the digits of a given number. 

#include<iostream>
using namespace std;

int main(){

    int a;
    cin >> a;
    int reverse = 0; 

    while(a > 0){     // TO FIND THE LAST DIGIT OF A NUMBER WE DIVIDE IT BY 10 AND THE REMAINDER IS THE DIGIT AT ONE'S PLACE.

        int lastdigit = a % 10;

        reverse = reverse*10 + lastdigit;
// now we will remove the last digit, for that we divide the number by 10.
        a = a / 10;
    }

cout << reverse << endl; 
    return 0;

}