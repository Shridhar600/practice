#include<iostream>
using namespace std;

// in char array we take the size as N + 1; as the last element is a null character which signifies 
// that out sentence is over and its not a space between the words.

int main(){

    char arr[100] = "apple";
    int i = 0;

    while (arr[i] != '\0')
    {
        /* code */
        cout << arr[i] << endl;
        i++;
    }

    //input

    char ar[100];
    cin >> ar;

    cout << ar[2];


    
}