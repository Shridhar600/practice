#include<iostream>
using namespace std;


// to check if a number is divisible by 2.
// using bit manipulation.


// if the number n is a multiple of 2 then in bit representation it only has 1 set-bit(1)
//  n = 8 = 1000 and (n - 1) will have have all the set bits after that position.
// n - 1 = 7 = 0111; 
// so, if we do n & (n - 1) then the answer will be 0000;

bool ispowerof2(int n){
    return  (n && !( n & n-1)); // if n & n-1 is 0 i.e. divisible by 2 then = 0 to return 
                        // which is true for our result so we will use ! to covert to true.
}

int main(){ 

    cout << ispowerof2(16) << endl;

    
return 0;
}