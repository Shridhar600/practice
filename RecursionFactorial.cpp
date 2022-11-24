#include<iostream>
using namespace std;
 
int Factorial(int n ){

    if(n == 1 || n == 0){
        return 1;
    }

    int previousResult = Factorial(n - 1);

    return n * previousResult;
}

int main(){

    cout << Factorial(-1) << endl;

    return 0;
}