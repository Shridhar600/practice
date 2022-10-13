// print numbers from 1 to 100 but don't print numbers who are divisible by 3;




#include<iostream>
using namespace std;

int main (){

    for(int i = 1; i <= 100; i++){


        if(i % 3 == 0){
            continue;
        }
        cout << i<< " ";
    }

return 0;

}