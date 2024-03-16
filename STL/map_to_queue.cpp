// todo - map keys as a priority queue
#include<iostream>
#include<map>
#include<queue>
using namespace std;

int main()
{
    string s = "tree";
    priority_queue <int> maxi;
    map <string , int> words;   // key , value

    for(int i = 0; i < s.length() ; i++)
    {
        string letter = s[i];
        words[letter] += 1;
    }
    return 0;
}