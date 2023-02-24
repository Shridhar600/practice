#include<iostream>
#include<vector> 
using namespace std;

int main(){

    vector<int> v;

    v.push_back(5);
    v.push_back(9);
    v.push_back(90);
    v.push_back(7);

    //print way 1;

    for(int i = 0; i <v.size(); i++){
        cout << v[i] << " ";
    }

    //another way using iterator pointer.
    
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

    // more easy way using AUTO KEYWORD;
    for(auto element:v){
        cout << element << " ";
    }
    return 0;
}