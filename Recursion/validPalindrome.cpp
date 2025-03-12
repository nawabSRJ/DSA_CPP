// todo - check if a string is a valid palindrome but using recursion
#include<iostream>
using namespace std;

bool isPalindrome(string s, int i){
    if(i>=s.size()/2) return true; // all checks done
    if(s[i] != s[s.size() - i - 1]) return false; 
    return isPalindrome(s,i+1);
}
int main()
{
    string s = "madam";
    int i = 0;
    cout<<isPalindrome(s,i)<<endl;
    return 0;
}