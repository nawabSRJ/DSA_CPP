// * source : https://leetcode.com/problems/buddy-strings
#include<bits/stdc++.h>
using namespace std;

bool isUnique(string s){
        sort(s.begin() , s.end());
        for(int i = 0 ; i < s.length() - 1; i++){
            if (s[i] == s[i+1]) return false;
        }
        return true;
    }
    bool buddyStrings(string s, string goal) {
        // logic 2
        if(s.length() == 1) return false;
        if (s == goal){
            if(isUnique(s)) return false;
            else return true;
        };
        vector <int> ind;   // to store indices of diff. elts
        int cnt = 0; 
        if(s.length() != goal.length()) return false;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] != goal[i]) {    // chars should be unique
                cnt++;  
                ind.push_back(i);
            }
        }
        
        if(cnt > 2) 
        {
            return false;
        }
        if(cnt == 2 && s[ind[0]] == goal[ind[1]] && s[ind[1]] == goal[ind[0]]){
            return true;   
            }
        return false;   // otherwise
    }

int main()
{
    cout << buddyStrings("acccccb" , "bccccca");    // correct -> true
    return 0;
}