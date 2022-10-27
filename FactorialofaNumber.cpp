#include<iostream>
using namespace std;

void Factorial(int n){
    int count = 1;
    
    for(int i =1; i<= n; i++){
        count = count * i;
    }
    cout << count << endl;
    return;
}

int main(){
    int n;
    cin >> n;

    Factorial(n);

    return 0;

}