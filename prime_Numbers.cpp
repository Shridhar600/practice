// Prime numbers are only divisible by itself and 1;
//For this we will divide the number one by one starting from 2 till n-1;

#include<iostream>
using namespace std;

int main(){

    int n;
    int i;

    cin >> n;

    if(n == 1){
        cout << "Invalid";
        
    }

    for(i = 2; i < n ; i++){//starting with 2 coz 1 se already divisible hona hai;

        if(n % i == 0){
            cout << "Non prime";
            break;
        }
    }
    if(i == n){    
        
    // this was done to keep check how the loop completed. if because of BREAK statement then i would be less that n otherwise if FOR loop got completed then it " I " must be == n;
    cout << "Prime"<< endl;
    }
    return 0;
}