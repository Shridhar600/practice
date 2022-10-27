#include<iostream>
using namespace std;

//fibenacci Sequence = A series in which the next term is the sum of 
//                      the previous two terms.

// 0,1,1,2,3,5......


void fib(int n){

    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for(int i =1 ; i<=n; i++){
        cout << t1 << endl;

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

    }return;

}

int main(){

    int n;
    cin >> n;
    fib(n);
return 0;


}