#include<iostream>
using namespace std;

int main(){

     // datatype arrayName[size]

     int array[4];

     // an int variable uses 4byte memory 
     // So, if we create an array with 5 integer in it 
     //then the memory used will be 4 * 5 = 20 bytes.
     // indexing in array starts from 0.

     array[0] = 10;
     array[1] = 20;
     //or
     int arr[2] = {12,20};

     cout << arr[1];

     // to take data in an array from a user
     int n;

     cin >> n;

     int sr1[n];
     for(int i = 0; i < n; i++){
        cin >> sr1[i];
        
     }

     for(int i = 0; i < n ; i++){
        cout << sr1[i] << endl;
     }

}
