// todo - Given two strings s and t, return the minimum window in s which will contain all the characters in t (no constraint for sequentially). If there is no such window in s that covers all characters in t, return the empty string "".
// ? Variable size window problem

#include<iostream>
using namespace std;

int minWindowSubstr(string s , string t){
    int left = 0;
    int right = 0;
    
}

int main()
{   
    string s = "ADOBECODEBANC";
    string t = "ABC";       // output : BANC

    cout << minWindowSubstr(s , t);

    return 0;
}