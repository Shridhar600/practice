#include<iostream>
#include<algorithm>
#include<string>

using namespace std;


//form the biggest number from the numeric string;


int main(){

    string s = "752313";

    sort(s.begin(), s.end(), greater<int>());

    cout << s << endl;



// print the frequency of times a character is repeated;

    string st = "hsdbwulajdnwassssnldwa";

    int freq[26]; // making an array to store all the character.

    for(int i = 0; i < 26; i++){
        freq[i] = 0;
    }

    for(int i = 0; i <st.size(); i++){
        freq[st[i] - 'a']++;
    }

    char ans = 'a';
    int maxFreq = 0;

    for(int i = 0; i<26; i++){
        if(freq[i]> maxFreq){
            maxFreq = freq[i];
            ans = i + 'a';
        }
    }
    cout << maxFreq <<endl;
    cout << ans<<endl;

}