#include<iostream>
using namespace std;


// find all the possible subset of a set.
// i << n is basically 2 ke power n.

int subsets(int arr[], int n)
{
    for(int i = 0; i < (1<<n); i++){
        for(int j = 0; j < n; j++){
            if(i & (i << j)){
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }

}

int main(){
    int arr[4] = {2 , 5 ,29, 6};
    subsets(arr,4);
return 0;
}