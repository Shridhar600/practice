#include<iostream>
using namespace std;


    int GetBit(int n, int pos){
        int x = 1 << pos;

        int ans = n & x;

        if(x != 0){
            cout << "the bit at the desired position is 1." << endl;
        }else{
            cout << "the bit at the desired position is 0"<< endl;
        }
        return 0;

    }
int main(){

    // To get bit. to find the bit at the desired position. 
    //we use 

   // bit =   10101
   // index = 43210


   // 1st step we will form a number who has only one 1 where we need to find the bit of the desired number. 
    int n, pos;
    cin >> n >> pos;
    GetBit(n, pos);
   
    return 0;
}
