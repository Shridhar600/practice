#include<iostream>
using namespace std;

//heap

int main(){
    int a =10;

    int *p = new int();

    *p = 10;

    delete(p); //flushing the memory before adding new value to p;

    p = new int[20]; // heap array // where is pointing towards 0th index of the array. 

    delete[]p;

    p = NULL; // to destroy P from the stack frame also.

    return 0;



    
}