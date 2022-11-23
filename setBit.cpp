#include<iostream>
using namespace std;

int setBit(int n, int pos){
    int x = 1 << pos;
    int result = n | x;
    return result;
}
int main(){
    cout << setBit(5,1) << endl;


    return 0;

}