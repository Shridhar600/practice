#include<iostream>
#include<algorithm>
#include<string>

using namespace std;



// UPPER AND LOWER CASE CHARACTER CONVERSION.
// the difference between a and A is of 32 so to covert the size we increase and decrease the accordingly.

int main(){

    string str;
    str = "andjansda";
// lower to upper
    for(int i = 0; i <str.length(); i++){
        if(str[i] >='a' && str[i] <= 'z'){
            str[i] = str[i] - 32;

        }
    }

    cout << str << endl;

    // upper to lower.

    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'A' && str[i <='z']){
            str[i] += 32;

        }
    }
    cout << str <<endl;

    return 0;

}