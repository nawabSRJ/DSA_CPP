#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    vector<string> strs;
    map <string , vector<string>> groups;
    vector<vector<string>> result;
    strs = {"eat","tea","tan","ate","nat","bat"};
    sort(strs.begin() , strs.end());
    for(int i = 0 ; i < strs.size() ; i++)
    {
        cout << strs[i]<<" ";
    }cout<<"\n\n";

    // todo - make key:value pairs using map

    for(int i = 0 ; i < strs.size() ; i++)
    {
        string sortedStr = strs[i];
        sort(sortedStr.begin() , sortedStr.end()); // * don't sort original
        groups[sortedStr].push_back(strs[i]); // * since right is a vector of strings 

    }

    // * convert group to vector of strings (only need second of map)
    for(auto pair : groups)
    {
        result.push_back(pair.second);
    }

    for(int i = 0 ; i < result.size() ; i++)
    {
        for(int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
            }
    cout << endl; 
    }

    
    
}

