// todo - Length of Longest Subarray With at Most K Frequency
// ? Source - https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/description/?envType=daily-question&envId=2024-03-28

#include<bits/stdc++.h>
using namespace std;
int main()
{       
    vector<int> nums = {1,2,1,2,1,2,1,2};   // o/p -> 2
    int k = 1;  // at max 2 frequency in window
    map<int , int> mp;  // elt , freq
    vector <int> ans;
    int n = nums.size();
    int size = 0;
    // traverse in array nums
    for(int i = 0 ; i < n ; i++)
    {
        // add nums[i] based on their frequency in mp
        if(mp[nums[i]] < k ){
            ans.push_back(nums[i]);
            mp[nums[i]] += 1;   // increase freq count
        }
        else if(mp[nums[i]] == k){
            // renew 
            // conditional updation of size var
            if(ans.size() > size){
                size = ans.size();
            }

            // mandatory updation
            ans.clear(); // reset
            mp.clear(); // reset
        }
    }
    if(mp.size() > size)    size = mp.size();
    cout << "Longest Subarray Size : " <<size<<endl;
    return 0;   
}