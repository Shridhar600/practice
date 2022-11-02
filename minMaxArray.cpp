#include<iostream>
#include<climits>

using namespace std;

int main(){
    int size;
    cin>>size;

    int arr[size];

    for ( int i  = 0; i < size ; i++){
        cin >> arr[i];
    }

    int maxno=INT_MIN;
    int minno=INT_MAX;

    for (int i = 0; i < size ; i++ ){
        if(arr[i]> maxno){
            maxno = arr[i];    /// or use maxno = max(maxno,arr[i]);
        }
        if(arr[i] < minno){
            minno = arr[i];
        }

    }
    cout << maxno << " " << minno << endl;
    return 0;

}