#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++ ){
        cin >> arr[i];
    }

    int counter = 1; //basically iterations // count = 1 matlb last postion ke pass sorted element rkhna hai,
                     // counter = 2  mtlb last element sorted hai ab last second element ko sort krne keliye loops chalenge ab.

    while(counter < n){
        for(int i = 0; i<n- counter; i ++){//for check 1 on 1 comparison kr rha i.
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter ++; // last element sort hogya ab lets move to next iteration for last 2nd element and so on.
    }

    for(int i = 0;i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}