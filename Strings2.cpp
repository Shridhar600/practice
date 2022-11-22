#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string str;

    // Append

    string s1 = "fam";
    string s2 = "ily";

// if we want to add s2 to s1 but dont want to change the value of s1 then
    cout << s1 + s2 << endl;
     

// adding s2 to s1    
    s1.append(s2);
    cout << s1 << endl;

// to access the a particular character from the string.
    cout << s1[2]<< endl;

// Clear Function: clears the values inside the string var. 
    s2.clear();
    cout << s2 << endl;

  //  s2 = "kya bhai kya haal hai.";

// Compare Function: 

    string str1 = "Ajansda";
    string str2 = "sjdnajsd";

    cout << s2.compare(s1) << endl;

// Empty Function: 
    if(s2.empty()){
        cout << "string is empty" << endl;

    }

// Erase Function: to earse number of characters form a string.
//format string.erase(konse se index se erase krna hai, kitne words erase krna hai wha se.)
    cout << str1 << endl;

    str1.erase(3, 2);
    cout << str1 << endl;

// Find function: 

    cout << str1.find("ada") << endl;

// Insert Function:
    string isrt = "gandsd";

    isrt.insert(4 ,"gnaud");
    cout << isrt << endl;

//length Function:

    cout << isrt.length() << endl;

// To get substring from a string:
    cout << isrt.substr(4 , 3) << endl;

// STOI function to convert string to integer;

    string sw1 = "8789";
    int x = stoi(sw1);
    cout << x + 5 << endl;

// To String function;

    int y = 7298;

    cout << to_string(y) + "02" << endl;

// SORTING IN STRING --------------------------------

//add header file #<algorithm>

    string st1 = "ajsndlajdsnasd";

    sort(st1.begin(), st1.end());

    cout <<st1 << endl;


return 0;
}