#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    cin.ignore(); //to clear the buffer.
    char arr[n+1];

    // to get and sentence as an input.

    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currentLen= 0, maxlen =0;

    while(1){

        if(arr[i] == ' ' || arr[i] == '\0'){

            if(currentLen > maxlen){
                maxlen = currentLen;
            }
            currentLen = 0;
        }else
        currentLen++;
        if(arr[i] == '\0')// to check sentence ke end me to nahi aagye as sentence ke end me null characrter hota hai. 
        break;

        i++;
    }
    
    cout << maxlen << endl;
    return 0;


}