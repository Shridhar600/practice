#include<iostream>
using namespace std;


//arr[rows][columns]


int main(){

    int n, m;
    cin >> n >> m;

    int arr[n][m];

    int rowend = n -1, rowstart = 0, colstart = 0, colend = m -1;

    for (int i = 0; i<n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];

        }
    }

    //SPIRAL

    while (rowstart <= rowend && colstart <= colend)
    {
        /* code */
        //startung row;

        for(int i = colstart; i <= colend; i++){
            cout << arr[rowstart][i] << " ";
        }

        rowstart++;

        // last columng;

        for(int row = rowstart; row <=rowend ; row++){
            cout << arr[row][colend] << " ";
        }

        colend--;

        // last row;

        for(int i = colend; i >= colstart; i--){
            cout<< arr[rowend][i] << " ";
        }

        rowend--;

        for(int i = rowend; i >= rowstart; i--){
            cout << arr[i][colstart] << " ";
        }

        colstart++;
    }
    
    return 0;

}