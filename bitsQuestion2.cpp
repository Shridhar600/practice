#include<iostream>
using namespace std;

// write a program to count the number of ones in binary representation of a number.

int numOfOnes(int n)
{
    int count = 0;
    while(n){ // this here means the loop goes on till n has value greater than 0 i.e true, as soon as it hits 0 it becomes false.
        n = n & (n-1);
        count++;
    }
    return count;
}
int main(){
    cout << numOfOnes(19) << endl;

return 0;
}