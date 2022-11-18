#include<iostream>
using namespace std;

// palindorme -words jisko agar ulta kr ke likho to bhi same word rahega.
//like race car


int main(){
    int n;
    cin >> n;

    char arr[n+1];

    cin >> arr;

    cout << arr<< endl;


    bool check = 1;

    for(int i = 0; i < n/2; i++){
        if(arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }

    if(check == true){
        cout << "word is a palindrome.";
    }else{
        cout << "word is not a palindrome.";
    }
    return 0;


}