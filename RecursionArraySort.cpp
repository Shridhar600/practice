#include<iostream>
using namespace std;
 
bool sorted(int arr[], int n){

    if(n == 1){
        return true;
    }
    bool restOfTheArray = sorted(arr+1, n -1);
    return (arr[0] < arr[1] && restOfTheArray); // will return true or false;
}

int main(){

    int arr[7] = {1,2,3,4,5,6,7};
    cout << sorted(arr, 7);
 
return 0;
}