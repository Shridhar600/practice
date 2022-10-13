#include<iostream>
using namespace std;

int main(){

    int pocketMoney = 3000;

    for(int date = 1; date<= 30; date++){

        if(date % 2 == 0){
            continue;// to skip the next itteration of the loop. 
        }

        if(pocketMoney == 0){
            break;// to get out of the loop or terminate the loop. 
        }

        cout << "Go out today"<< endl;
        pocketMoney = pocketMoney - 300;
    }

}