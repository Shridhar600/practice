#include<iostream>
using namespace std;
 
// Calculate n raised to power of P. 

int power(int n, int p ){

    if(p == 0){
        return 1;
    }
    int prevPower = power(n,p-1);

    return n * prevPower;  // ye ha main functioning part jiske bare me hume sochna hai OK.
    
}

int main(){
    int n = 4;
    int p = 3;

    cout << power( n, p);
 
return 0;
}