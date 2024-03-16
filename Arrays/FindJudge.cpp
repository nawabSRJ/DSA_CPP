// ? Leetcode 997 -> https://leetcode.com/problems/find-the-town-judge/description/?envType=daily-question&envId=2024-02-22
#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    vector<vector<int>> trust;
    trust.push_back({1,1});
    // trust.push_back({2, 3});
    int n = 1;
    map <int , int> out;
    // initialize with 0 until n
    for(int i = 1 ; i <= n; i++)
    {
        out[i] = 0; // set Zero
    }
  
    // creating out map
    for(int i = 0 ; i < trust.size();i++)
    {
        for(int j = 0 ; j < 1;j++)
        {
            out[trust[i][j]] += 1;  
        }
    }
    // let's display out map
    for(auto i : out)
    {
        if(i.second == 0)
        {
            cout << "Judge is : " <<i.first<<endl;
        }
    }
    
    return 0;
}