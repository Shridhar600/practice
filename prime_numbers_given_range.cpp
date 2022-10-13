#include<iostream>
using namespace std;

int main(){

    int a;
    int b;
    int num;

    cin >> a;
    cin >> b;

    for( num = a; num <= b; num ++){
        int i;
        for(i = 2; i <num; i++){
            if(num % i == 0){
                break;
            }
        }
        if(i == num){
            cout << num << endl;
        }
    }
        return 0;
}