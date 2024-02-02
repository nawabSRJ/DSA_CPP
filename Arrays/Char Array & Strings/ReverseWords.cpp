// ? input - my name is ; o/p - ym eman si
#include<iostream>
using namespace std;
string reverseWords(string s);

int main()
{
    string s ,ans = "";
    cout << "Enter a string : "<<endl;
    getline(cin , s);
    ans = reverseWords(s);  
    // ans += s;
    cout<<ans;
    return 0;
}

string reverseWords(string s)
{
    string sub = "" , ans = "";
    int index;
    for(int i = 0 ; s[i] != '\0' ; i++)
    {
        if(s[i] == ' '){
            for(int j = index - 1; j >= 0; j--){
                ans += sub[j];
            }
            ans += ' ';
            sub = ""; // reset sub
            index = 0; // reset index
        }
        sub += s[i];
        index++;
    }
    // for the last word
    for(int j = index - 1; j >= 0; j--){
                ans += sub[j];
            }
    return ans;
}