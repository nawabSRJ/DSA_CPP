// * source : https://leetcode.com/problems/isomorphic-strings/?envType=daily-question&envId=2024-04-02


#include<iostream>
#include<map>
using namespace std;
int main()
{
    string s = "badc";
    string t = "baba";
        
        // * check if len is equal or not
        if(s.length() != t.length())
            return false;
        
        map<char , char> mps;
        map<char , char> mpt;
        for(int i = 0 ; i < s.length(); i++){
            char charS = s[i];
            char charT = t[i];

            // not present
            if(!mps.count(charS)){
                mps[charS] = charT;
                mpt[charT] = charS;
                continue;
            }

           /* if(!mpt.count(charT)){
                // reverse configuration
                mpt[charT] = charS;
                continue;
            } */

            // if present ~ check mapping
            cout<<"\n In between : \n"<<endl;
            if(mps[charS] != charT ){
                 cout<<false<<endl;
                 exit(0);
            }
            if(mpt[charT] != charS){
                 cout<<false<<endl;
                 exit(0);
            }

        }

        // * show the maps
        for(auto i : mps){
            cout << i.first << " : "<<i.second<<endl;
        }cout<<endl;
        for(auto i : mpt){
            cout << i.first << " : "<<i.second<<endl;
        }cout<<endl;

        // * check the maps
        cout<<"\n Final Result : \n"<<endl;
        for(int i = 0 ; i < s.length(); i++){
            char charS = s[i];
            char charT = t[i];
            
            if(mps[charS] != charT ){
                cout<<false<<endl;
                exit(0);
            }
            if(mpt[charT] != charS){
                 cout<<false<<endl;
                 exit(0);
            }
        }

        cout << "Otherwise : "<<endl;
        cout <<true<<endl;
    return 0;
}