#include<iostream>
using namespace std;

// binary Coefficient == nCr

int fact(int n){

    int count = 1;
    for(int i = 2; i <=n; i++){
        count*= i;
    }
    return count;
}


int main(){
    
    int n,r;
    cin >> n >> r;

    int ans = fact(n)/ (fact(r) * fact(n-r));

    cout << ans << endl;    
    return 0;

}