#include<iostream>
using namespace std;

// Memory location is in the hexadecimal form.

int main(){

    int a = 10;

    int *ptr;

    ptr = &a;

    cout << &a<< endl;
    cout << ptr << endl;

    /// DEREFRENCING - this one prints the value of the variable that
    // the pointer is pointing to. 

    cout << *ptr << endl;

    ptr++;
    cout << ptr<<endl;

    // pointers in arrays

    int arr[] = {50, 20, 20 , 30,40};

    cout << *arr << endl;  // arr khud bhi pointer ki trh kaam krega, pointing towards 0th element. 

    int *pt = arr;
    cout << pt <<endl;
    cout  << *pt << endl;

    for(int i = 0; i < 5; i++){
        cout << *pt << " ";
        pt++;
    }
    // pointer to pointer 

    int **ptr2 = &ptr;

    cout << *ptr2 << endl;

    cout << **ptr2 << endl;




}