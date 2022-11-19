#include<iostream>
using namespace std;

void swap(int *a, int *b){ // receving address of b;
    int temp = *a; //interchanging values of a and b using *ptr;
    *a = *b;
    *b =temp;
}

int main(){
    int a =2;
    int b =4;
    int *aptr = &a;
    int *bptr = &b;

    swap(aptr, bptr); // sending address of a and b;
    cout << a << " " << b ;
}