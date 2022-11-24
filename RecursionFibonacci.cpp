#include<iostream>
using namespace std;

// fib(0) = 0
// fib(1) = 1
 

int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }

    return fib(n - 1) + fib (n -2);

}
int main(){

    cout << fib(6) << endl;
return 0;
}