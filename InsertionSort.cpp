#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }


    for(int i = 1; i < n; i++){  // we will start form the second element of the array 
        int temp = arr[i];  // we will store the current number begin checked in temp so that if required it can be swaped.
        int j;
        for(j = i -1; j>= 0 && arr[j] > temp; j--){ // J will start from behind of I and will go left side of the array i.e. j--
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
        // storing the number being checked on the ith postion. 
    }

    for(int i = 0; i < n ; i++){
        cout << arr[i]<< " ";

    }
    return 0;

}