// ? Question - in a sentence when encounter space , replace with @40 
// * ex - My name is SRJ -> My@40name@40is@40SRJ

// ! Learning -> 'push_back' can also be used to push characters in a string
#include<iostream>
using namespace std;



string replaceSpaces(string s)
{
    string temp = "";
    for(int i = 0 ; i < s.length(); i++)
    {
        if(s[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }else{
            temp.push_back(s[i]);
        }
        
    }
    return temp;
}


int main()
{
    string s = "My name is SRJ";    // input string
    cout <<replaceSpaces(s);
    return 0;
}